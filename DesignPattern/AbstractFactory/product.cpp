#include "product.h"
#include <iostream>

AbstractProductA::AbstractProductA()
{

}

AbstractProductA::~AbstractProductA()
{

}

AbstractProductB::AbstractProductB()
{

}

AbstractProductB::~AbstractProductB()
{

}

ProductA1::ProductA1()
{
    std::cout << "Product A1" << std::endl;
}

ProductA1::~ProductA1()
{

}

ProductA2::ProductA2()
{
    std::cout << "Product A2" << std::endl;
}

ProductA2::~ProductA2()
{

}


ProductB1::ProductB1()
{
    std::cout << "Product B1" << std::endl;
}

ProductB1::~ProductB1()
{

}

ProductB2::ProductB2()
{
    std::cout << "Product B2" << std::endl;
}

ProductB2::~ProductB2()
{

}
