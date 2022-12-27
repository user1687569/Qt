#ifndef ITERATOR_H
#define ITERATOR_H
#include "aggregate.h"

typedef int Object;
class Aggregate;

class Iterator
{
public:
    Iterator();
    virtual ~Iterator();

    virtual void First() = 0;
    virtual void Next() = 0;
    virtual bool IsDone() = 0;
    virtual Object CurrentItem() = 0;
};

class ConcreteIterator : public Iterator
{
public:
    ConcreteIterator(Aggregate* ag, int index = 0);
    ~ConcreteIterator();

    void First();
    void Next();
    bool IsDone();
    Object CurrentItem();

private:
    Aggregate* m_aggregate;
    int m_index;
};

#endif // ITERATOR_H
