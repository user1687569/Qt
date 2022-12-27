#include "company.h"
#include <iostream>

using namespace std;

Company::Company(string name)
    : Component(name)
{
    m_list_component.clear();
}

Company::~Company()
{

}

void Company::Add(Component *component)
{
    m_list_component.push_back(component);
}

void Company::Remove(Component *component)
{
    m_list_component.remove(component);
}

void Company::Show(int depth)
{
    for(int i = 0; i < depth; i++)
        cout << "-";
    cout << m_name << endl;

    list<Component *>::const_iterator iter = m_list_component.begin();
    for(; iter != m_list_component.end(); iter++)
    {
        (*iter)->Show(depth+2);
    }
}
