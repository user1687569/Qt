#include <iostream>
#include "handle.h"

using namespace std;

int main()
{
    Handle* handle1 = new ConcreteHandleA();
    Handle* handle2 = new ConcreteHandleB();

    handle1->SetSuccessor(handle2);
    handle1->HandleRequest();
    return 0;
}
