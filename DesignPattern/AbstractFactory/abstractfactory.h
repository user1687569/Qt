#ifndef ABSTRACTFACTORY_H
#define ABSTRACTFACTORY_H

#include "product.h"

class AbstractProductA;
class AbstractProductB;

class AbstractFactory
{
public:
    AbstractFactory();
    virtual ~AbstractFactory();

    virtual AbstractProductA* CreateProductA() = 0;
    virtual AbstractProductB* CreateProductB() = 0;
};

class ConcreteFactroyOne : public AbstractFactory
{
public:
    ConcreteFactroyOne();
    ~ConcreteFactroyOne();

    AbstractProductA* CreateProductA();
    AbstractProductB* CreateProductB();
};

class ConcreteFactoryTwo : public AbstractFactory
{
public:
    ConcreteFactoryTwo();
    ~ConcreteFactoryTwo();

    AbstractProductA* CreateProductA();
    AbstractProductB* CreateProductB();
};

#endif // ABSTRACTFACTORY_H
