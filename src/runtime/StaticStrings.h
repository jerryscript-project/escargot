/*
 * Copyright (c) 2016-present Samsung Electronics Co., Ltd
 *
 *  This library is free software; you can redistribute it and/or
 *  modify it under the terms of the GNU Lesser General Public
 *  License as published by the Free Software Foundation; either
 *  version 2.1 of the License, or (at your option) any later version.
 *
 *  This library is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 *  Lesser General Public License for more details.
 *
 *  You should have received a copy of the GNU Lesser General Public
 *  License along with this library; if not, write to the Free Software
 *  Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301
 *  USA
 */

#ifndef __EscargotStaticStrings__
#define __EscargotStaticStrings__

#include "runtime/AtomicString.h"

namespace Escargot {

#define FOR_EACH_STATIC_STRING(F) \
    F(null)                       \
    F(undefined)                  \
    F(prototype)                  \
    F(construct)                  \
    F(constructor)                \
    F(name)                       \
    F(arguments)                  \
    F(caller)                     \
    F(callee)                     \
    F(length)                     \
    F(__proto__)                  \
    F(__defineGetter__)           \
    F(__defineSetter__)           \
    F(__lookupGetter__)           \
    F(__lookupSetter__)           \
    F(value)                      \
    F(writable)                   \
    F(enumerable)                 \
    F(configurable)               \
    F(get)                        \
    F(set)                        \
    F(String)                     \
    F(Number)                     \
    F(NaN)                        \
    F(Infinity)                   \
    F(EPSILON)                    \
    F(NEGATIVE_INFINITY)          \
    F(POSITIVE_INFINITY)          \
    F(MAX_VALUE)                  \
    F(MIN_VALUE)                  \
    F(eval)                       \
    F(Object)                     \
    F(GlobalObject)               \
    F(Boolean)                    \
    F(Error)                      \
    F(ReferenceError)             \
    F(TypeError)                  \
    F(RangeError)                 \
    F(SyntaxError)                \
    F(URIError)                   \
    F(EvalError)                  \
    F(AggregateError)             \
    F(message)                    \
    F(stack)                      \
    F(valueOf)                    \
    F(Array)                      \
    F(isArray)                    \
    F(of)                         \
    F(from)                       \
    F(concat)                     \
    F(flat)                       \
    F(flatMap)                    \
    F(forEach)                    \
    F(indexOf)                    \
    F(lastIndexOf)                \
    F(join)                       \
    F(push)                       \
    F(pop)                        \
    F(slice)                      \
    F(splice)                     \
    F(shift)                      \
    F(sort)                       \
    F(Function)                   \
    F(Empty)                      \
    F(Date)                       \
    F(getDate)                    \
    F(getDay)                     \
    F(getFullYear)                \
    F(getHours)                   \
    F(getMilliseconds)            \
    F(getMinutes)                 \
    F(getMonth)                   \
    F(getSeconds)                 \
    F(getTime)                    \
    F(getTimezoneOffset)          \
    F(getUTCDate)                 \
    F(getUTCDay)                  \
    F(getUTCFullYear)             \
    F(getUTCHours)                \
    F(getUTCMilliseconds)         \
    F(getUTCMinutes)              \
    F(getUTCMonth)                \
    F(getUTCSeconds)              \
    F(setDate)                    \
    F(setFullYear)                \
    F(setHours)                   \
    F(setMilliseconds)            \
    F(setMinutes)                 \
    F(setMonth)                   \
    F(setSeconds)                 \
    F(setTime)                    \
    F(setUTCDate)                 \
    F(setUTCFullYear)             \
    F(setUTCHours)                \
    F(setUTCMilliseconds)         \
    F(setUTCMinutes)              \
    F(setUTCMonth)                \
    F(setUTCSeconds)              \
    F(toDateString)               \
    F(toISOString)                \
    F(toLocaleDateString)         \
    F(toLocaleTimeString)         \
    F(toTimeString)               \
    F(toUTCString)                \
    F(getYear)                    \
    F(setYear)                    \
    F(toGMTString)                \
    F(Math)                       \
    F(PI)                         \
    F(E)                          \
    F(abs)                        \
    F(cos)                        \
    F(ceil)                       \
    F(max)                        \
    F(min)                        \
    F(floor)                      \
    F(fround)                     \
    F(hypot)                      \
    F(pow)                        \
    F(random)                     \
    F(round)                      \
    F(sign)                       \
    F(sin)                        \
    F(sinh)                       \
    F(sqrt)                       \
    F(tan)                        \
    F(tanh)                       \
    F(trunc)                      \
    F(log)                        \
    F(log1p)                      \
    F(log10)                      \
    F(log2)                       \
    F(toString)                   \
    F(toLocaleString)             \
    F(boolean)                    \
    F(number)                     \
    F(toFixed)                    \
    F(toPrecision)                \
    F(string)                     \
    F(object)                     \
    F(function)                   \
    F(flags)                      \
    F(RegExp)                     \
    F(source)                     \
    F(lastIndex)                  \
    F(test)                       \
    F(exec)                       \
    F(input)                      \
    F(index)                      \
    F(compile)                    \
    F(byteLength)                 \
    F(subarray)                   \
    F(buffer)                     \
    F(JSON)                       \
    F(parse)                      \
    F(stringify)                  \
    F(toJSON)                     \
    F(Intl)                       \
    F(Collator)                   \
    F(DateTimeFormat)             \
    F(format)                     \
    F(NumberFormat)               \
    F(supportedLocalesOf)         \
    F(resolvedOptions)            \
    F(getPrototypeOf)             \
    F(setPrototypeOf)             \
    F(isPrototypeOf)              \
    F(propertyIsEnumerable)       \
    F(ignoreCase)                 \
    F(global)                     \
    F(groups)                     \
    F(dotAll)                     \
    F(multiline)                  \
    F(sticky)                     \
    F(unicode)                    \
    F(description)                \
    F(implements)                 \
    F(interface)                  \
    F(package)                    \
    F(yield)                      \
    F(let)                        \
    F(LN10)                       \
    F(LN2)                        \
    F(LOG10E)                     \
    F(LOG2E)                      \
    F(MAX_SAFE_INTEGER)           \
    F(MIN_SAFE_INTEGER)           \
    F(SQRT1_2)                    \
    F(SQRT2)                      \
    F(UTC)                        \
    F(acos)                       \
    F(acosh)                      \
    F(anonymous)                  \
    F(apply)                      \
    F(asin)                       \
    F(asinh)                      \
    F(atan)                       \
    F(atan2)                      \
    F(atanh)                      \
    F(bind)                       \
    F(call)                       \
    F(cbrt)                       \
    F(charAt)                     \
    F(charCodeAt)                 \
    F(clz32)                      \
    F(cosh)                       \
    F(codePointAt)                \
    F(create)                     \
    F(decodeURI)                  \
    F(decodeURIComponent)         \
    F(defineProperties)           \
    F(defineProperty)             \
    F(encodeURI)                  \
    F(encodeURIComponent)         \
    F(escape)                     \
    F(every)                      \
    F(exp)                        \
    F(expm1)                      \
    F(fill)                       \
    F(filter)                     \
    F(find)                       \
    F(findIndex)                  \
    F(freeze)                     \
    F(fromEntries)                \
    F(fromCharCode)               \
    F(fromCodePoint)              \
    F(getOwnPropertyDescriptor)   \
    F(getOwnPropertyDescriptors)  \
    F(getOwnPropertyNames)        \
    F(getOwnPropertySymbols)      \
    F(hasOwnProperty)             \
    F(deleteProperty)             \
    F(imul)                       \
    F(isExtensible)               \
    F(isFinite)                   \
    F(isFrozen)                   \
    F(isNaN)                      \
    F(isInteger)                  \
    F(isSafeInteger)              \
    F(isSealed)                   \
    F(keys)                       \
    F(localeCompare)              \
    F(compare)                    \
    F(map)                        \
    F(match)                      \
    F(matchAll)                   \
    F(now)                        \
    F(normalize)                  \
    F(parseFloat)                 \
    F(parseInt)                   \
    F(preventExtensions)          \
    F(print)                      \
    F(read)                       \
    F(append)                     \
    F(reduce)                     \
    F(reduceRight)                \
    F(repeat)                     \
    F(replace)                    \
    F(reverse)                    \
    F(revocable)                  \
    F(revoke)                     \
    F(run)                        \
    F(seal)                       \
    F(search)                     \
    F(some)                       \
    F(split)                      \
    F(startsWith)                 \
    F(endsWith)                   \
    F(includes)                   \
    F(substr)                     \
    F(substring)                  \
    F(toExponential)              \
    F(toLocaleLowerCase)          \
    F(toLocaleUpperCase)          \
    F(toLowerCase)                \
    F(toUpperCase)                \
    F(trim)                       \
    F(unescape)                   \
    F(unshift)                    \
    F(TypedArray)                 \
    F(Int8Array)                  \
    F(Int16Array)                 \
    F(Int32Array)                 \
    F(Uint8Array)                 \
    F(Uint16Array)                \
    F(Uint32Array)                \
    F(Uint8ClampedArray)          \
    F(Float32Array)               \
    F(Float64Array)               \
    F(BigInt64Array)              \
    F(BigUint64Array)             \
    F(ArrayBuffer)                \
    F(isView)                     \
    F(DataView)                   \
    F(BYTES_PER_ELEMENT)          \
    F(copyWithin)                 \
    F(byteOffset)                 \
    F(getFloat32)                 \
    F(getFloat64)                 \
    F(getInt8)                    \
    F(getInt16)                   \
    F(getInt32)                   \
    F(getUint8)                   \
    F(getUint16)                  \
    F(getUint32)                  \
    F(getBigInt64)                \
    F(getBigUint64)               \
    F(setFloat32)                 \
    F(setFloat64)                 \
    F(setInt8)                    \
    F(setInt16)                   \
    F(setInt32)                   \
    F(setUint8)                   \
    F(setUint16)                  \
    F(setUint32)                  \
    F(setBigInt64)                \
    F(setBigUint64)               \
    F(Promise)                    \
    F(Proxy)                      \
    F(proxy)                      \
    F(alreadyResolved)            \
    F(alreadyCalled)              \
    F(values)                     \
    F(Reflect)                    \
    F(ownKeys)                    \
    F(remainingElements)          \
    F(all)                        \
    F(race)                       \
    F(reject)                     \
    F(resolve)                    \
    F(then)                       \
    F(gc)                         \
    F($_)                         \
    F(lastMatch)                  \
    F(lastParen)                  \
    F(leftContext)                \
    F(rightContext)               \
    F($1)                         \
    F($2)                         \
    F($3)                         \
    F($4)                         \
    F($5)                         \
    F($6)                         \
    F($7)                         \
    F($8)                         \
    F($9)                         \
    F(assign)                     \
    F(is)                         \
    F(Map)                        \
    F(clear)                      \
    F(has)                        \
    F(done)                       \
    F(next)                       \
    F(nextMethod)                 \
    F(MapIterator)                \
    F(ArrayIterator)              \
    F(StringIterator)             \
    F(RegExpStringIterator)       \
    F(SetIterator)                \
    F(entries)                    \
    F(size)                       \
    F(add)                        \
    F(Set)                        \
    F(WeakMap)                    \
    F(WeakSet)                    \
    F(Generator)                  \
    F(GeneratorFunction)          \
    F(AsyncFunction)              \
    F(Symbol)                     \
    F(symbol)                     \
    F(hasInstance)                \
    F(isConcatSpreadable)         \
    F(iterator)                   \
    F(species)                    \
    F(toPrimitive)                \
    F(toStringTag)                \
    F(unscopables)                \
    F(keyFor)                     \
    F(raw)                        \
    F(load)                       \
    F(getCanonicalLocales)        \
    F(Module)                     \
    F(anchor)                     \
    F(big)                        \
    F(blink)                      \
    F(bold)                       \
    F(fixed)                      \
    F(fontcolor)                  \
    F(fontsize)                   \
    F(italics)                    \
    F(link)                       \
    F(small)                      \
    F(strike)                     \
    F(sub)                        \
    F(sup)                        \
    F(padStart)                   \
    F(padEnd)                     \
    F(trimStart)                  \
    F(trimEnd)                    \
    F(trimRight)                  \
    F(trimLeft)                   \
    F(asyncIterator)              \
    F(AsyncGenerator)             \
    F(AsyncGeneratorFunction)     \
    F(Locale)                     \
    F(baseName)                   \
    F(calendar)                   \
    F(caseFirst)                  \
    F(collation)                  \
    F(hourCycle)                  \
    F(numeric)                    \
    F(numberingSystem)            \
    F(language)                   \
    F(script)                     \
    F(region)                     \
    F(maximize)                   \
    F(minimize)                   \
    F(PluralRules)                \
    F(select)                     \
    F(formatToParts)              \
    F(RelativeTimeFormat)         \
    F(globalThis)                 \
    F(allSettled)                 \
    F(any)                        \
    F(BigInt)                     \
    F(bigint)                     \
    F(asUintN)                    \
    F(asIntN)

#if defined(ENABLE_WASM)
#define FOR_EACH_STATIC_WASM_STRING(F) \
    F(WebAssembly)                     \
    F(Instance)                        \
    F(Memory)                          \
    F(Table)                           \
    F(Global)                          \
    F(validate)                        \
    F(instantiate)                     \
    F(CompileError)                    \
    F(LinkError)                       \
    F(RuntimeError)                    \
    F(initial)                         \
    F(maximum)                         \
    F(element)                         \
    F(grow)                            \
    F(anyfunc)                         \
    F(exports)                         \
    F(imports)                         \
    F(kind)                            \
    F(module)                          \
    F(table)                           \
    F(memory)                          \
    F(customSections)                  \
    F(i32)                             \
    F(i64)                             \
    F(f32)                             \
    F(f64)
#else
#define FOR_EACH_STATIC_WASM_STRING(F)
#endif

#define FOR_EACH_STATIC_NUMBER(F) \
    F(0)                          \
    F(1)                          \
    F(2)                          \
    F(3)                          \
    F(4)                          \
    F(5)                          \
    F(6)                          \
    F(7)                          \
    F(8)                          \
    F(9)                          \
    F(10)                         \
    F(11)                         \
    F(12)                         \
    F(13)                         \
    F(14)                         \
    F(15)                         \
    F(16)                         \
    F(17)                         \
    F(18)                         \
    F(19)                         \
    F(20)                         \
    F(21)                         \
    F(22)                         \
    F(23)                         \
    F(24)                         \
    F(25)                         \
    F(26)                         \
    F(27)                         \
    F(28)                         \
    F(29)                         \
    F(30)                         \
    F(31)                         \
    F(32)                         \
    F(33)                         \
    F(34)                         \
    F(35)                         \
    F(36)                         \
    F(37)                         \
    F(38)                         \
    F(39)                         \
    F(40)                         \
    F(41)                         \
    F(42)                         \
    F(43)                         \
    F(44)                         \
    F(45)                         \
    F(46)                         \
    F(47)                         \
    F(48)                         \
    F(49)                         \
    F(50)                         \
    F(51)                         \
    F(52)                         \
    F(53)                         \
    F(54)                         \
    F(55)                         \
    F(56)                         \
    F(57)                         \
    F(58)                         \
    F(59)                         \
    F(60)                         \
    F(61)                         \
    F(62)                         \
    F(63)                         \
    F(64)                         \
    F(65)                         \
    F(66)                         \
    F(67)                         \
    F(68)                         \
    F(69)                         \
    F(70)                         \
    F(71)                         \
    F(72)                         \
    F(73)                         \
    F(74)                         \
    F(75)                         \
    F(76)                         \
    F(77)                         \
    F(78)                         \
    F(79)                         \
    F(80)                         \
    F(81)                         \
    F(82)                         \
    F(83)                         \
    F(84)                         \
    F(85)                         \
    F(86)                         \
    F(87)                         \
    F(88)                         \
    F(89)                         \
    F(90)                         \
    F(91)                         \
    F(92)                         \
    F(93)                         \
    F(94)                         \
    F(95)                         \
    F(96)                         \
    F(97)                         \
    F(98)                         \
    F(99)                         \
    F(100)                        \
    F(101)                        \
    F(102)                        \
    F(103)                        \
    F(104)                        \
    F(105)                        \
    F(106)                        \
    F(107)                        \
    F(108)                        \
    F(109)                        \
    F(110)                        \
    F(111)                        \
    F(112)                        \
    F(113)                        \
    F(114)                        \
    F(115)                        \
    F(116)                        \
    F(117)                        \
    F(118)                        \
    F(119)                        \
    F(120)                        \
    F(121)                        \
    F(122)                        \
    F(123)                        \
    F(124)                        \
    F(125)                        \
    F(126)                        \
    F(127)

// name on code, string
#define FOR_EACH_LAZY_STATIC_STRING(F)               \
    F(EvalInput, "eval input")                       \
    F(FunctionInput, "function input")               \
    F(ObjectNullToString, "[object Null]")           \
    F(ObjectUndefinedToString, "[object Undefined]") \
    F(ObjectObjectToString, "[object Object]")       \
    F(ObjectArrayToString, "[object Array]")         \
    F(ObjectStringToString, "[object String]")       \
    F(ObjectArgumentsToString, "[object Arguments]") \
    F(ObjectFunctionToString, "[object Function]")   \
    F(ObjectErrorToString, "[object Error]")         \
    F(ObjectBooleanToString, "[object Boolean]")     \
    F(ObjectNumberToString, "[object Number]")       \
    F(ObjectDateToString, "[object Date]")           \
    F(ObjectRegExpToString, "[object RegExp]")       \
    F(DotDotDotArgs, "...args")                      \
    F(SuperDotDotDotArgs, "super(...args)")          \
    F(Status, "status")                              \
    F(Fulfilled, "fulfilled")                        \
    F(Reason, "reason")                              \
    F(Rejected, "rejected")                          \
    F(URL, "url")

#if defined(ENABLE_INTL)
#define FOR_EACH_LAZY_INTL_STATIC_STRING(F)                   \
    F(Lookup, "lookup")                                       \
    F(DashU, "-u")                                            \
    F(LocaleMatcher, "localeMatcher")                         \
    F(BestFit, "best fit")                                    \
    F(Literal, "literal")                                     \
    F(SmallLetterNaN, "nan")                                  \
    F(SmallLetterInfinity, "infinity")                        \
    F(Integer, "integer")                                     \
    F(Group, "group")                                         \
    F(Decimal, "decimal")                                     \
    F(Fraction, "fraction")                                   \
    F(PlusSign, "plusSign")                                   \
    F(MinusSign, "minusSign")                                 \
    F(PercentSign, "percentSign")                             \
    F(Currency, "currency")                                   \
    F(ExponentSeparator, "exponentSeparator")                 \
    F(ExponentMinusSign, "exponentMinusSign")                 \
    F(ExponentInteger, "exponentInteger")                     \
    F(Unit, "unit")                                           \
    F(Compact, "compact")                                     \
    F(H11, "h11")                                             \
    F(H12, "h12")                                             \
    F(H23, "h23")                                             \
    F(H24, "h24")                                             \
    F(Upper, "upper")                                         \
    F(Lower, "lower")                                         \
    F(Cardinal, "cardinal")                                   \
    F(Ordinal, "ordinal")                                     \
    F(MinimumIntegerDigits, "minimumIntegerDigits")           \
    F(MinimumFractionDigits, "minimumFractionDigits")         \
    F(MaximumFractionDigits, "maximumFractionDigits")         \
    F(MinimumSignificantDigits, "minimumSignificantDigits")   \
    F(MaximumSignificantDigits, "maximumSignificantDigits")   \
    F(Type, "type")                                           \
    F(Long, "long")                                           \
    F(Short, "short")                                         \
    F(Narrow, "narrow")                                       \
    F(Style, "style")                                         \
    F(Always, "always")                                       \
    F(Auto, "auto")                                           \
    F(InitializedIntlObject, "initializedIntlObject")         \
    F(InitializedCollator, "initializedCollator")             \
    F(InitializedDateTimeFormat, "initializedDateTimeFormat") \
    F(InitializedNumberFormat, "initializedNumberFormat")     \
    F(CompareFunction, "compareFunction")                     \
    F(SmallLetterLocale, "locale")                            \
    F(Usage, "usage")                                         \
    F(Sensitivity, "sensitivity")                             \
    F(IgnorePunctuation, "ignorePunctuation")                 \
    F(Any, "any")                                             \
    F(Date, "date")                                           \
    F(Time, "time")                                           \
    F(Second, "second")                                       \
    F(Minute, "minute")                                       \
    F(Hour, "hour")                                           \
    F(Day, "day")                                             \
    F(Week, "week")                                           \
    F(Weekday, "weekday")                                     \
    F(Month, "month")                                         \
    F(Quarter, "quarter")                                     \
    F(Year, "year")                                           \
    F(Era, "era")                                             \
    F(DayPeriod, "dayPeriod")                                 \
    F(Hour12, "hour12")                                       \
    F(TimeZone, "timeZone")                                   \
    F(TimeZoneName, "timeZoneName")                           \
    F(TwoDigit, "2-digit")                                    \
    F(Basic, "basic")                                         \
    F(FormatMatcher, "formatMatcher")                         \
    F(Kn, "kn")                                               \
    F(Kf, "kf")                                               \
    F(Base, "base")                                           \
    F(Accent, "accent")                                       \
    F(Case, "case")                                           \
    F(Variant, "variant")                                     \
    F(DataLocale, "dataLocale")                               \
    F(Percent, "percent")                                     \
    F(Code, "code")                                           \
    F(NarrowSymbol, "narrowSymbol")                           \
    F(CurrencyDisplay, "currencyDisplay")                     \
    F(CurrencySign, "currencySign")                           \
    F(Accounting, "accounting")                               \
    F(Standard, "standard")                                   \
    F(UnitDisplay, "unitDisplay")                             \
    F(Scientific, "scientific")                               \
    F(Engineering, "engineering")                             \
    F(Notation, "notation")                                   \
    F(CompactDisplay, "compactDisplay")                       \
    F(UseGrouping, "useGrouping")                             \
    F(Never, "never")                                         \
    F(ExceptZero, "exceptZero")                               \
    F(SignDisplay, "signDisplay")
#else
#define FOR_EACH_LAZY_INTL_STATIC_STRING(F)
#endif

class StaticStrings {
public:
    StaticStrings(AtomicStringMap* atomicStringMap)
        : dtoaCacheSize(5)
        , m_atomicStringMap(atomicStringMap)
    {
    }

    AtomicString NegativeInfinity;
    AtomicString stringTrue;
    AtomicString stringFalse;
    AtomicString stringPublic;
    AtomicString stringProtected;
    AtomicString stringPrivate;
    AtomicString stringStatic;
    AtomicString stringCatch;
    AtomicString stringDelete;
    AtomicString stringFor;
    AtomicString stringDefault;
    AtomicString stringStarDefaultStar;
    AtomicString stringStarNamespaceStar;
    AtomicString stringMutable;
    AtomicString stringThis;

    // this js keywords are used in esprima
    // after removing esprima::keywordToString
    // these strings are can be removed
    AtomicString stringIf;
    AtomicString stringIn;
    AtomicString stringDo;
    AtomicString stringVar;
    AtomicString stringNew;
    AtomicString stringTry;
    AtomicString stringElse;
    AtomicString stringCase;
    AtomicString stringVoid;
    AtomicString stringWith;
    AtomicString stringEnum;
    AtomicString stringWhile;
    AtomicString stringBreak;
    AtomicString stringThrow;
    AtomicString stringConst;
    AtomicString stringClass;
    AtomicString stringSuper;
    AtomicString stringReturn;
    AtomicString stringTypeof;
    AtomicString stringSwitch;
    AtomicString stringExport;
    AtomicString stringImport;
    AtomicString stringFinally;
    AtomicString stringExtends;
    AtomicString stringContinue;
    AtomicString stringDebugger;
    AtomicString stringInstanceof;
    AtomicString stringError;

    AtomicString defaultRegExpString;
    AtomicString get__proto__;
    AtomicString set__proto__;
    AtomicString getbyteLength;
    AtomicString getbyteOffset;
    AtomicString getLength;
    AtomicString getBuffer;
    AtomicString getFlags;
    AtomicString getGlobal;
    AtomicString getDotAll;
    AtomicString getIgnoreCase;
    AtomicString getMultiline;
    AtomicString getDescription;
    AtomicString getSource;
    AtomicString getSticky;
    AtomicString getUnicode;
    AtomicString getSize;
    AtomicString getSymbolSpecies;
    AtomicString getSymbolToStringTag;
    AtomicString getCompare;
    AtomicString getBaseName;
    AtomicString getCalendar;
    AtomicString getCaseFirst;
    AtomicString getCollation;
    AtomicString getHourCycle;
    AtomicString getNumeric;
    AtomicString getNumberingSystem;
    AtomicString getLanguage;
    AtomicString getScript;
    AtomicString getRegion;
    AtomicString getFormat;
    AtomicString intlDotLocale;
    AtomicString intlDotCollator;
    AtomicString intlDotRelativeTimeFormat;
    AtomicString symbolSplit;
    AtomicString symbolReplace;
    AtomicString symbolSearch;
    AtomicString symbolMatch;
    AtomicString symbolMatchAll;
    AtomicString $Ampersand;
    AtomicString $PlusSign;
    AtomicString $GraveAccent;
    AtomicString $Apostrophe;

#if defined(ENABLE_WASM)
    AtomicString WebAssemblyDotModule;
    AtomicString WebAssemblyDotInstance;
    AtomicString WebAssemblyDotMemory;
    AtomicString WebAssemblyDotTable;
    AtomicString WebAssemblyDotGlobal;
#endif

#define ESCARGOT_ASCII_TABLE_MAX 256
    AtomicString asciiTable[ESCARGOT_ASCII_TABLE_MAX];

#define ESCARGOT_STRINGS_NUMBERS_MAX 128
    AtomicString numbers[ESCARGOT_STRINGS_NUMBERS_MAX];

#define DECLARE_STATIC_STRING(name) AtomicString name;
    FOR_EACH_STATIC_STRING(DECLARE_STATIC_STRING);
    FOR_EACH_STATIC_WASM_STRING(DECLARE_STATIC_STRING);
#undef DECLARE_STATIC_STRING

#define DECLARE_LAZY_STATIC_STRING(Name, unused) AtomicString lazy##Name();
    FOR_EACH_LAZY_STATIC_STRING(DECLARE_LAZY_STATIC_STRING);
    FOR_EACH_LAZY_INTL_STATIC_STRING(DECLARE_LAZY_STATIC_STRING);
#undef DECLARE_LAZY_STATIC_STRING

    void initStaticStrings();

    const size_t dtoaCacheSize; // 5;
    mutable Vector<std::pair<double, ::Escargot::String*>, GCUtil::gc_malloc_allocator<std::pair<double, ::Escargot::String*>>> dtoaCache;

    ::Escargot::String* dtoa(double d) const;

protected:
    AtomicStringMap* m_atomicStringMap;

#define DECLARE_LAZY_STATIC_STRING(Name, unused) AtomicString m_lazy##Name;
    FOR_EACH_LAZY_STATIC_STRING(DECLARE_LAZY_STATIC_STRING);
    FOR_EACH_LAZY_INTL_STATIC_STRING(DECLARE_LAZY_STATIC_STRING);
#undef DECLARE_LAZY_STATIC_STRING
};
} // namespace Escargot

#endif
