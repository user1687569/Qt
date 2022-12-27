#include "rddepartment.h"

using namespace std;

RDDepartment::RDDepartment(string name)
    : Component(name)
{

}

RDDepartment::~RDDepartment()
{

}

void RDDepartment::Show(int depth)
{
    for(int i = 0; i < depth; i++)
        cout << "-";
    cout << m_name << endl;
}
