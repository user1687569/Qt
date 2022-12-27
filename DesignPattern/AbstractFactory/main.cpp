#include <iostream>
#include "abstractfactory.h"

using namespace std;

int main()
{
    AbstractFactory* factoryOne = new ConcreteFactroyOne();
    factoryOne->CreateProductA();
    factoryOne->CreateProductB();

    AbstractFactory* factoryTwo = new ConcreteFactoryTwo();
    factoryTwo->CreateProductA();
    factoryTwo->CreateProductB();

    return 0;
}
