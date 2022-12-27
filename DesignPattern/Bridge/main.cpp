#include <iostream>
#include "os.h"
#include "computer.h"

using namespace std;

int main()
{
    OS* apple_os = new AppleOS();
    OS* linux_os = new LinuxOS();
    Computer* com1 = new AppleComputer(apple_os);
    Computer* com2 = new HuaWeiComputer(linux_os);
    com1->install_os();
    com2->install_os();

    return 0;
}
