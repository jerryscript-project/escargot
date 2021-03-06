/*
 * Copyright (C) 2017 Apple Inc. All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY APPLE INC. ``AS IS'' AND ANY
 * EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
 * PURPOSE ARE DISCLAIMED.  IN NO EVENT SHALL APPLE INC. OR
 * CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
 * EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
 * PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR
 * PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY
 * OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

#include "WTFBridge.h"
#include "YarrUnicodeProperties.h"

#include "Yarr.h"
#include "YarrPattern.h"

using namespace WTF;

namespace JSC {
namespace Yarr {

struct HashIndex {
    int16_t value;
    int16_t next;
};

struct HashValue {
    const char* key;
    int index;
};

struct HashTable {
    int numberOfValues;
    int indexMask;
    const HashValue* values;
    const HashIndex* index;

    ALWAYS_INLINE int entry(WTF::String& key) const
    {
        for (int i = 0; i < numberOfValues; i++) {
            if (key.impl()->equals(values[i].key, strlen(values[i].key)))
                return values[i].index;
        }
        return -1;
    }
};

#if defined(ENABLE_ICU)
#include "UnicodePatternTables.h"
#endif

Optional<BuiltInCharacterClassID> unicodeMatchPropertyValue(WTF::String unicodePropertyName, WTF::String unicodePropertyValue)
{
#if defined(ENABLE_ICU)
    int propertyIndex = -1;

    if (unicodePropertyName == "Script" || unicodePropertyName == "sc")
        propertyIndex = scriptHashTable.entry(unicodePropertyValue);
    else if (unicodePropertyName == "Script_Extensions" || unicodePropertyName == "scx")
        propertyIndex = scriptExtensionHashTable.entry(unicodePropertyValue);
    else if (unicodePropertyName == "General_Category" || unicodePropertyName == "gc")
        propertyIndex = generalCategoryHashTable.entry(unicodePropertyValue);

    if (propertyIndex == -1)
        return nullptr;

    return Optional<BuiltInCharacterClassID>(static_cast<BuiltInCharacterClassID>(static_cast<int>(BuiltInCharacterClassID::BaseUnicodePropertyID) + propertyIndex));
#else
    return nullptr;
#endif
}

Optional<BuiltInCharacterClassID> unicodeMatchProperty(WTF::String unicodePropertyValue)
{
#if defined(ENABLE_ICU)
    int propertyIndex = -1;

    propertyIndex = binaryPropertyHashTable.entry(unicodePropertyValue);
    if (propertyIndex == -1)
        propertyIndex = generalCategoryHashTable.entry(unicodePropertyValue);

    if (propertyIndex == -1)
        return nullptr;

    return Optional<BuiltInCharacterClassID>(static_cast<BuiltInCharacterClassID>(static_cast<int>(BuiltInCharacterClassID::BaseUnicodePropertyID) + propertyIndex));
#else
    return nullptr;
#endif
}

std::unique_ptr<CharacterClass> createUnicodeCharacterClassFor(BuiltInCharacterClassID unicodeClassID)
{
#if defined(ENABLE_ICU)
    unsigned unicodePropertyIndex = static_cast<unsigned>(unicodeClassID) - static_cast<unsigned>(BuiltInCharacterClassID::BaseUnicodePropertyID);

    return createFunctions[unicodePropertyIndex]();
#else
    RELEASE_ASSERT_NOT_REACHED();
    return nullptr;
#endif
}
}
} // namespace JSC::Yarr
