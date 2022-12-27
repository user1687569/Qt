#include "state.h"
#include "context.h"
#include <iostream>

using namespace std;

State::State()
{

}

State::~State()
{

}

void State::OperationInterface(Context *context)
{
    cout << "State..." << endl;
}

bool State::ChangeState(Context *context, State *state)
{
    context->ChangeState(state);
    return true;
}

void State::OperationChangeState(Context *context)
{

}

ConcreteStateA::ConcreteStateA()
{

}

ConcreteStateA::~ConcreteStateA()
{

}

void ConcreteStateA::OperationInterface(Context *context)
{
    cout << "ConcreteStateA::OperationInterface..." << endl;
}

void ConcreteStateA::OperationChangeState(Context *context)
{
    OperationInterface(context);
    this->ChangeState(context, new ConcreteStateB());
}

ConcreteStateB::ConcreteStateB()
{

}

ConcreteStateB::~ConcreteStateB()
{

}

void ConcreteStateB::OperationInterface(Context *context)
{
    cout << "ConcreteStateB::OperationInterface..." << endl;
}

void ConcreteStateB::OperationChangeState(Context *context)
{
    OperationInterface(context);
    this->ChangeState(context, new ConcreteStateA());
}



