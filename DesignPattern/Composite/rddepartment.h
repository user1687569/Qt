#ifndef RDDEPARTMENT_H
#define RDDEPARTMENT_H
#include "component.h"
#include <iostream>
#include <string>

using namespace std;

class RDDepartment : public Component
{
public:
    RDDepartment(string name);
    ~RDDepartment();

    void Show(int depth);
};

#endif // RDDEPARTMENT_H
