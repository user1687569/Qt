#include "handle.h"
#include <iostream>

using namespace std;

Handle::Handle()
{
    m_success = 0;
}

Handle::Handle(Handle *success)
{
    this->m_success = success;
}

Handle::~Handle()
{
    delete m_success;
}

void Handle::SetSuccessor(Handle *success)
{
    this->m_success = success;
}

Handle *Handle::GetSuccessor()
{
    return m_success;
}

ConcreteHandleA::ConcreteHandleA()
{

}

ConcreteHandleA::ConcreteHandleA(Handle *success)
    : Handle(success)
{

}

ConcreteHandleA::~ConcreteHandleA()
{

}

void ConcreteHandleA::HandleRequest()
{
    if(this->GetSuccessor() != 0)
    {
        cout << "ConcreteHandleA..." << endl;
        this->GetSuccessor()->HandleRequest();
    }
    else
    {
        cout << "ConcreteHandleA..." << endl;
    }
}

ConcreteHandleB::ConcreteHandleB()
{

}

ConcreteHandleB::ConcreteHandleB(Handle *success)
    : Handle(success)
{

}

ConcreteHandleB::~ConcreteHandleB()
{

}

void ConcreteHandleB::HandleRequest()
{
    if(this->GetSuccessor() != 0)
    {
        cout << "ConcreteHandleB..." << endl;
        this->GetSuccessor()->HandleRequest();
    }
    else
    {
        cout << "ConcreteHandleB..." << endl;
    }
}





