/*
 * Copyright (c) 2016 Samsung Electronics Co., Ltd
 *
 *    Licensed under the Apache License, Version 2.0 (the "License");
 *    you may not use this file except in compliance with the License.
 *    You may obtain a copy of the License at
 *
 *        http://www.apache.org/licenses/LICENSE-2.0
 *
 *    Unless required by applicable law or agreed to in writing, software
 *    distributed under the License is distributed on an "AS IS" BASIS,
 *    WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *    See the License for the specific language governing permissions and
 *    limitations under the License.
 */

#ifndef DoWhileStatementNode_h
#define DoWhileStatementNode_h

#include "ExpressionNode.h"
#include "StatementNode.h"

namespace Escargot {

class DoWhileStatementNode : public StatementNode {
public:
    friend class ScriptParser;
    DoWhileStatementNode(Node *test, Node *body)
        : StatementNode()
    {
        m_test = (ExpressionNode *)test;
        m_body = (StatementNode *)body;
    }

    virtual ASTNodeType type() { return ASTNodeType::DoWhileStatement; }
protected:
    ExpressionNode *m_test;
    StatementNode *m_body;
};
}

#endif
