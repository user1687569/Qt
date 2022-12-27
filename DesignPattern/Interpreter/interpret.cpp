#include "interpret.h"
#include <iostream>

using namespace std;

AbstractExpression::AbstractExpression()
{

}

AbstractExpression::~AbstractExpression()
{

}

void AbstractExpression::Interpret(const Context &context)
{

}

TerminalExpression::TerminalExpression(const string &statement)
{
    this->m_statement = statement;
}

TerminalExpression::~TerminalExpression()
{

}

void TerminalExpression::Interpret(const Context &context)
{
    cout << this->m_statement << "TerminalExpression" << endl;
}

NonterminalExpression::NonterminalExpression(AbstractExpression *expression, int times)
{
    this->m_expression = expression;
    this->m_times = times;
}

NonterminalExpression::~NonterminalExpression()
{

}

void NonterminalExpression::Interpret(const Context &context)
{
    for(int i = 0; i < m_times; i++)
        this->m_expression->Interpret(context);
}


