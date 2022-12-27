#include "mediator.h"
#include "colleage.h"

Mediator::Mediator()
{

}

Mediator::~Mediator()
{

}

ConcreteMediator::ConcreteMediator()
{

}

ConcreteMediator::ConcreteMediator(Colleage *colleageA, Colleage *colleageB)
{
    this->m_colleageA = colleageA;
    this->m_colleageB = colleageB;
}

ConcreteMediator::~ConcreteMediator()
{

}

void ConcreteMediator::SetConreteColleageA(Colleage *colleageA)
{
    this->m_colleageA = colleageA;
}

void ConcreteMediator::SetConreteColleageB(Colleage *colleageB)
{
    this->m_colleageB = colleageB;
}

Colleage *ConcreteMediator::GetColleageA()
{
    return m_colleageA;
}

Colleage *ConcreteMediator::GetColleageB()
{
    return m_colleageB;
}

void ConcreteMediator::IntroColleage(Colleage *colleageA, Colleage *colleageB)
{
    this->m_colleageA = colleageA;
    this->m_colleageB = colleageB;
}

void ConcreteMediator::DoActionFromAtoB()
{
    m_colleageB->SetState(m_colleageA->GetState());
}

void ConcreteMediator::DoActionFromBtoA()
{
    m_colleageA->SetState(m_colleageB->GetState());
}





