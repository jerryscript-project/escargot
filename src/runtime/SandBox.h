#ifndef __EscargotSandBox__
#define __EscargotSandBox__

#include "parser/ast/Node.h"
#include "runtime/Context.h"

namespace Escargot {

class SandBox {
    MAKE_STACK_ALLOCATED();

public:
    SandBox(Context* s)
    {
        m_context = s;
        m_context->m_sandBoxStack.pushBack(this);
    }

    ~SandBox()
    {
        ASSERT(m_context->m_sandBoxStack.back() == this);
        m_context->m_sandBoxStack.pop_back();
    }

    struct StackTraceData {
        String* fileName;
        NodeLOC loc;
        StackTraceData()
            : fileName(String::emptyString)
            , loc(SIZE_MAX, SIZE_MAX, SIZE_MAX)
        {
        }
    };

    struct SandBoxResult {
        Value result;
        Value error;
        Vector<StackTraceData, gc_malloc_allocator<StackTraceData>> stackTraceData;
        SandBoxResult()
            : result(Value::EmptyValue)
            , error(Value::EmptyValue)
        {
        }
    };

    SandBoxResult run(const std::function<Value()>& scriptRunner); // for capsule script executing with try-catch
    void throwException(ExecutionState& state, Value exception);

protected:
    Context* m_context;
    Vector<std::pair<ExecutionContext*, StackTraceData>, gc_malloc_allocator<std::pair<ExecutionContext*, StackTraceData>>> m_stackTraceData;
};
}

#endif
