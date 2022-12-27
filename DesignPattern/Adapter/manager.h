#ifndef MANAGER_H
#define MANAGER_H
#include "human.h"

class Manager
{
public:
    Manager(Developer* developer);
    ~Manager();

    void develop_a_function();

private:
    Developer* m_developer;
};

#endif // MANAGER_H
