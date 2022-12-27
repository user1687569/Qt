#ifndef VISITOR_H
#define VISITOR_H
#include "element.h"

class Element;
class ConcreteElementA;
class ConcreteElementB;

class Visitor
{
public:
    Visitor();
    virtual ~Visitor();

    virtual void VisitConcreteElementA(Element* element) = 0;
    virtual void VisitConcreteElementB(Element* element) = 0;

};

class ConcreteVisitorA : public Visitor
{
public:
    ConcreteVisitorA();
    virtual ~ConcreteVisitorA();

    virtual void VisitConcreteElementA(Element* element);
    virtual void VisitConcreteElementB(Element* element);
};

class ConcreteVisitorB : public Visitor
{
public:
    ConcreteVisitorB();
    virtual ~ConcreteVisitorB();

    virtual void VisitConcreteElementA(Element* element);
    virtual void VisitConcreteElementB(Element* element);
};

#endif // VISITOR_H
