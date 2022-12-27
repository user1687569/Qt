#ifndef AGGREGATE_H
#define AGGREGATE_H
#include "iterator.h"

typedef int Object;
class Iterator;

class Aggregate
{
public:
    Aggregate();
    virtual ~Aggregate();

    virtual Iterator* CreateIterator() = 0;
    virtual Object GetItem(int index) = 0;
    virtual int GetSize() = 0;
};

class ConcreteAggregate : public Aggregate
{
public:
    enum {SIZE = 3};
    ConcreteAggregate();
    ~ConcreteAggregate();

    Iterator* CreateIterator();
    Object GetItem(int index);
    int GetSize();

private:
    Object m_objects[SIZE];
};

#endif // AGGREGATE_H
