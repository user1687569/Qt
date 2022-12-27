#include "context.h"
#include "state.h"

Context::Context()
{

}

Context::Context(State *state)
{
    this->m_state = state;
}

Context::~Context()
{
    delete m_state;
}

void Context::OperationInterface()
{
    m_state->OperationInterface(this);
}

void Context::OperationChangeState()
{
    m_state->OperationChangeState(this);
}

bool Context::ChangeState(State *state)
{
    this->m_state = state;
    return true;
}
