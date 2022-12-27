#include "iterator.h"
#include "aggregate.h"
#include <iostream>

using namespace std;

Iterator::Iterator()
{

}

Iterator::~Iterator()
{

}

ConcreteIterator::ConcreteIterator(Aggregate *ag, int index)
{
    this->m_aggregate = ag;
    this->m_index = index;
}

ConcreteIterator::~ConcreteIterator()
{

}

Object ConcreteIterator::CurrentItem()
{
    return m_aggregate->GetItem(m_index);
}

void ConcreteIterator::First()
{
    m_index = 0;
}

void ConcreteIterator::Next()
{
    if(m_index < m_aggregate->GetSize())
        m_index++;
}

bool ConcreteIterator::IsDone()
{
    return (m_index == m_aggregate->GetSize());
}

