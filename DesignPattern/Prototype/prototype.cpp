#include "prototype.h"
#include <iostream>
using namespace std;

Prototype::Prototype()
{

}

Prototype::~Prototype()
{
    cout << "destroy Prototype..." << endl;
}

Prototype *Prototype::Clone() const
{
    return 0;
}

Monkey::Monkey(string name)
    : m_name(name)
{

}

Monkey::Monkey(const Monkey &monkey)
{
    std::cout << "Monkey copy..." << std::endl;
    this->m_name = monkey.m_name;
}

Monkey::~Monkey()
{
    cout << "destroy Monkey..." << endl;
}

Monkey *Monkey::Clone() const
{
    return new Monkey(*this);
}

void Monkey::show() const
{
    cout << "Monkey name: " << m_name << endl;
}


