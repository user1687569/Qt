#include <iostream>
#include "aggregate.h"
#include "iterator.h"

using namespace std;

int main()
{
    Aggregate* aggregate = new ConcreteAggregate();
    Iterator* iter = new ConcreteIterator(aggregate);

    for(; !(iter->IsDone()); iter->Next())
        cout << iter->CurrentItem() << endl;

    return 0;
}
