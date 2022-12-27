#include "director.h"

Director::Director(Builder* builder)
{
    m_builder = builder;
}

Director::~Director()
{

}

void Director::Construct()
{
    m_builder->BuildPartA("user_defined");
    m_builder->BuildPartB("user_defined");
    m_builder->BuildPartC("user_defined");
    m_builder->GetProduct();
}
