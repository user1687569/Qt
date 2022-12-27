#include "builder.h"
#include <iostream>

Builder::Builder()
{

}

Builder::~Builder()
{

}

ConcreteBuilder::ConcreteBuilder()
{

}

ConcreteBuilder::~ConcreteBuilder()
{

}

void ConcreteBuilder::BuildPartA(const string &buildPara)
{
    std::cout << "Step1:Build PartA..." << buildPara << std::endl;
}

void ConcreteBuilder::BuildPartB(const string &buildPara)
{
    std::cout << "Step1:Build PartB..." << buildPara << std::endl;
}

void ConcreteBuilder::BuildPartC(const string &buildPara)
{
    std::cout << "Step1:Build PartC..." << buildPara << std::endl;
}

Product *ConcreteBuilder::GetProduct()
{
    return new Product();
}
