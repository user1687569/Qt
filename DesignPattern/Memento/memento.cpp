#include "memento.h"
#include <iostream>

using namespace std;
typedef string State;

Originator::Originator()
{
    m_state = "";
    m_memento = 0;
}

Originator::Originator(const State &state)
{
    m_state = state;
    m_memento = 0;
}

Originator::~Originator()
{

}

Memento* Originator::CreateMemento()
{
    return new Memento(m_state);
}

State Originator::GetState()
{
    return m_state;
}

void Originator::SetState(const State &state)
{
    m_state = state;
}

void Originator::PrintState()
{
    cout << this->m_state << "..." << endl;
}

void Originator::SetMemento(Memento *memento)
{

}

void Originator::RestoreToMemento(Memento *memento)
{
    this->m_state = m_memento->GetState();
}

//class Memento
Memento::Memento()
{

}

Memento::Memento(const State &state)
{
    m_state = state;
}

State Memento::GetState()
{
    return m_state;
}

void Memento::SetState(const State &state)
{
    m_state = state;
}
