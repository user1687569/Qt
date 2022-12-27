#include <iostream>
#include "context.h"
#include "interpret.h"

using namespace std;

int main()
{
    Context* context = new Context();
    AbstractExpression* terminal = new TerminalExpression("Hello");
    AbstractExpression* nonTerminal = new NonterminalExpression(terminal, 2);

    nonTerminal->Interpret(*context);
    return 0;
}
