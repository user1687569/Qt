#include <iostream>
#include "element.h"
#include "visitor.h"

using namespace std;

int main()
{
    Visitor* visitor = new ConcreteVisitorA();
    Element* element = new ConcreteElementA();
    element->Accept(visitor);
    return 0;
}
