#include "aggregate.h"
#include "iterator.h"
#include <iostream>

using namespace std;

Aggregate::Aggregate()
{

}

Aggregate::~Aggregate()
{

}

ConcreteAggregate::ConcreteAggregate()
{
    for(int i = 0; i < SIZE; i++)
        m_objects[i] = i;
}

ConcreteAggregate::~ConcreteAggregate()
{

}

Iterator* ConcreteAggregate::CreateIterator()
{
    return new ConcreteIterator(this);
}

Object ConcreteAggregate::GetItem(int index)
{
    if(index < this->GetSize())
        return m_objects[index];
    else
        return -1;
}

int ConcreteAggregate::GetSize()
{
    return SIZE;
}



