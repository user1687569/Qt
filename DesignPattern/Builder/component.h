#ifndef COMPONENT_H
#define COMPONENT_H


class Component
{
public:
    Component();
    ~Component();

    void Add(const Component& com);
    Component* GetChild(int index);
    void Remove(const Component& com);
};

#endif // COMPONENT_H
