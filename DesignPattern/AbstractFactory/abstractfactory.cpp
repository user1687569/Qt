#include "abstractfactory.h"
#include "product.h"
#include <iostream>

AbstractFactory::AbstractFactory()
{

}

AbstractFactory::~AbstractFactory()
{

}

ConcreteFactroyOne::ConcreteFactroyOne()
{

}

ConcreteFactroyOne::~ConcreteFactroyOne()
{

}

AbstractProductA *ConcreteFactroyOne::CreateProductA()
{
    return new ProductA1();
}

AbstractProductB *ConcreteFactroyOne::CreateProductB()
{
    return new ProductB1();
}

ConcreteFactoryTwo::ConcreteFactoryTwo()
{

}

ConcreteFactoryTwo::~ConcreteFactoryTwo()
{

}

AbstractProductA *ConcreteFactoryTwo::CreateProductA()
{
    return new ProductA2();
}

AbstractProductB *ConcreteFactoryTwo::CreateProductB()
{
    return new ProductB2();
}
