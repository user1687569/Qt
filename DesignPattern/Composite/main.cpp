#include <iostream>
#include "component.h"
#include "company.h"
#include "hrdepartment.h"
#include "rddepartment.h"

using namespace std;

int main()
{
    Component* root = new Company("Nebula");
    Component* root_depart1 = new HRDepartment("Nebula_HR");
    Component* root_depart2 = new RDDepartment("Nebula_RD");
    root->Add(root_depart1);
    root->Add(root_depart2);

    Component* companyOne = new Company("ShiDaiXingYun");
    Component* companyOne_depart1 = new HRDepartment("ShiDaiXingYun_HR");
    Component* companyTwo_depart2 = new RDDepartment("ShiDaiXingYun_RD");
    companyOne->Add(companyOne_depart1);
    companyOne->Add(companyTwo_depart2);

    root->Add(companyOne);

    root->Show(1);

    return 0;
}
