#include "colleage.h"
#include "mediator.h"
#include <iostream>

using namespace std;

Colleage::Colleage()
{

}

Colleage::Colleage(Mediator *mediator)
{
    this->m_mediator = mediator;
}

Colleage::~Colleage()
{

}

ConcreteColleageA::ConcreteColleageA()
{

}

ConcreteColleageA::ConcreteColleageA(Mediator *mediator)
    : Colleage(mediator)
{

}

ConcreteColleageA::~ConcreteColleageA()
{

}

string ConcreteColleageA::GetState()
{
    return m_state;
}

void ConcreteColleageA::SetState(const string &state)
{
    m_state = state;
}

void ConcreteColleageA::Action()
{
    m_mediator->DoActionFromAtoB();
    cout << "state of ConcreteColleageA: "
         << this->GetState() << endl;
}

ConcreteColleageB::ConcreteColleageB()
{

}

ConcreteColleageB::ConcreteColleageB(Mediator *mediator)
    : Colleage(mediator)
{

}

ConcreteColleageB::~ConcreteColleageB()
{

}

string ConcreteColleageB::GetState()
{
    return m_state;
}

void ConcreteColleageB::SetState(const string &state)
{
    m_state = state;
}

void ConcreteColleageB::Action()
{
    m_mediator->DoActionFromBtoA();
    cout << "state of ConcreteColleageB: "
         << this->GetState() << endl;
}




