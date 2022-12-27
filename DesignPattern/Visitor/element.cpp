#include "element.h"
#include "visitor.h"
#include <iostream>

using namespace std;

Element::Element()
{

}

Element::~Element()
{

}

void Element::Accept(Visitor *visitor)
{

}

ConcreteElementA::ConcreteElementA()
{

}

ConcreteElementA::~ConcreteElementA()
{

}

void ConcreteElementA::Accept(Visitor *visitor)
{
    visitor->VisitConcreteElementA(this);
    cout << "Visiting ConcreteElementA..." << endl;
}

ConcreteElementB::ConcreteElementB()
{

}

ConcreteElementB::~ConcreteElementB()
{

}

void ConcreteElementB::Accept(Visitor *visitor)
{
    visitor->VisitConcreteElementB(this);
    cout << "Visiting ConcreteElementB..." << endl;
}

