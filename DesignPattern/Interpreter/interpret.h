#ifndef INTERPRET_H
#define INTERPRET_H
#include "context.h"
#include <string>

using namespace std;

class AbstractExpression
{
public:
    AbstractExpression();
    virtual ~AbstractExpression();
    virtual void Interpret(const Context& context);
};

class TerminalExpression : public AbstractExpression
{
public:
    TerminalExpression(const string& statement);
    ~TerminalExpression();

    void Interpret(const Context& context);

private:
    string m_statement;
};

class NonterminalExpression : public AbstractExpression
{
public:
    NonterminalExpression(AbstractExpression* expression, int times);
    ~NonterminalExpression();

    void Interpret(const Context& context);

private:
    AbstractExpression* m_expression;
    int m_times;
};


#endif // INTERPRET_H
