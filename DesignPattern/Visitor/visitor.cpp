#include "visitor.h"
#include "element.h"
#include <iostream>

using namespace std;

Visitor::Visitor()
{

}

Visitor::~Visitor()
{

}

ConcreteVisitorA::ConcreteVisitorA()
{

}

ConcreteVisitorA::~ConcreteVisitorA()
{

}

void ConcreteVisitorA::VisitConcreteElementA(Element *element)
{
    cout << "I will visit ConcreteElementA..." << endl;
}

void ConcreteVisitorA::VisitConcreteElementB(Element *element)
{
    cout << "I will visit ConcreteElementB..." << endl;
}

ConcreteVisitorB::ConcreteVisitorB()
{

}

ConcreteVisitorB::~ConcreteVisitorB()
{

}

void ConcreteVisitorB::VisitConcreteElementA(Element *element)
{
    cout << "I will visit ConcreteElementA..." << endl;
}

void ConcreteVisitorB::VisitConcreteElementB(Element *element)
{
    cout << "I will visit ConcreteElementB..." << endl;
}


