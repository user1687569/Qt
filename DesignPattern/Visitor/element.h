#ifndef ELEMENT_H
#define ELEMENT_H
#include "visitor.h"

class Visitor;

class Element
{
public:
    Element();
    virtual ~Element();

    virtual void Accept(Visitor* visitor) = 0;
};

class ConcreteElementA : public Element
{
public:
    ConcreteElementA();
    ~ConcreteElementA();

    void Accept(Visitor* visitor);
};

class ConcreteElementB : public Element
{
public:
    ConcreteElementB();
    ~ConcreteElementB();

    void Accept(Visitor* visitor);
};


#endif // ELEMENT_H
