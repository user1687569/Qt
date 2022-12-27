#ifndef HRDEPARTMENT_H
#define HRDEPARTMENT_H
#include "component.h"
#include <iostream>
#include <string>

using namespace std;

class HRDepartment : public Component
{
public:
    HRDepartment(string name);
    ~HRDepartment();

    void Show(int depth);
};

#endif // HRDEPARTMENT_H
