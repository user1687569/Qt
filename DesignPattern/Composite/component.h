#ifndef COMPONENT_H
#define COMPONENT_H
#include <iostream>
#include <string>

using namespace std;

class Component
{
public:
    Component(string name) : m_name(name) {}
    virtual ~Component() {}

    virtual void Show(int depth) {}
    virtual void Add(Component*) {}
    virtual void Remove(Component*) {}
    virtual Component* GetChild(int) {}

protected:
    string m_name;
};

#endif // COMPONENT_H
