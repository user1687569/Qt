#ifndef COMPANY_H
#define COMPANY_H
#include "component.h"
#include <list>
#include <iostream>

using namespace std;

class Company : public Component
{
public:
    Company(string name);
    ~Company();

    void Add(Component *component) ;
    void Remove(Component *component);
    void Show(int depth);

private:
    list<Component*> m_list_component;
};

#endif // COMPANY_H
