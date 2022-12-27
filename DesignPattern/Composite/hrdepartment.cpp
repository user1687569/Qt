#include "hrdepartment.h"

using namespace std;

HRDepartment::HRDepartment(string name)
    : Component(name)
{

}

HRDepartment::~HRDepartment()
{

}

void HRDepartment::Show(int depth)
{
    for(int i = 0; i < depth; i++)
        cout << "-";
    cout << m_name << endl;
}
