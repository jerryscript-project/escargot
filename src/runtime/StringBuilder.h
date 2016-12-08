#ifndef __EscargotStringBuilder__
#define __EscargotStringBuilder__

#include "runtime/String.h"

namespace Escargot {

#define ESCARGOT_STRING_BUILDER_INLINE_STORAGE_MAX 12

class StringBuilder {
    struct StringBuilderPiece {
        String* m_string;
        size_t m_start, m_end;
    };

    void appendPiece(String* str, size_t s, size_t e);

public:
    StringBuilder()
    {
        m_hasASCIIContent = true;
        m_contentLength = 0;
        m_piecesInlineStorageUsage = 0;
    }

    size_t contentLength() { return m_contentLength; }
    void appendString(const char* str)
    {
        appendPiece(new ASCIIString(str), 0, strlen(str));
    }

    void appendChar(char16_t ch)
    {
        char16_t s = ch;
        appendString(new UTF16String(&s, 1));
    }

    void appendString(String* str)
    {
        appendPiece(str, 0, str->length());
    }

    void appendSubString(String* str, size_t s, size_t e)
    {
        appendPiece(str, s, e);
    }

    String* finalize();

protected:
    bool m_hasASCIIContent;
    size_t m_piecesInlineStorageUsage;
    size_t m_contentLength;
    StringBuilderPiece m_piecesInlineStorage[ESCARGOT_STRING_BUILDER_INLINE_STORAGE_MAX];
    std::vector<StringBuilderPiece, gc_allocator_ignore_off_page<StringBuilderPiece>> m_pieces;
};
}

#endif
