#include <iostream>
#include "context.h"
#include "state.h"

using namespace std;

int main()
{
    State* stateA = new ConcreteStateA();
//    State* stateB = new ConcreteStateB();
    Context* context = new Context(stateA);
    context->OperationInterface();
    context->OperationChangeState();
    context->OperationInterface();

    if(context != NULL)
        delete context;

    if(stateA != NULL)
        delete stateA;
    return 0;
}
