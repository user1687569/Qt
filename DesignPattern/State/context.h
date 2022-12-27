#ifndef CONTEXT_H
#define CONTEXT_H
#include "state.h"

class State;
class Context
{
public:
    Context();
    Context(State* state);
    ~Context();

    void OperationInterface();
    void OperationChangeState();

private:
    friend class State;
    bool ChangeState(State* state);

private:
    State* m_state;
};

#endif // CONTEXT_H
