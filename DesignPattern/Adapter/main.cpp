#include <iostream>
#include "human.h"
#include "manager.h"

using namespace std;

int main()
{
    Developer* lee = new Developer();
    Manager* manager = new Manager(lee);
    manager->develop_a_function();

    return 0;
}
