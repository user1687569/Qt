#include "os.h"
#include <iostream>

using namespace std;

OS::OS()
{

}

OS::~OS()
{

}

AppleOS::AppleOS()
{

}

AppleOS::~AppleOS()
{

}

void AppleOS::install_os_imp()
{
    cout << "install apple OS..." << endl;
}

LinuxOS::LinuxOS()
{

}

LinuxOS::~LinuxOS()
{

}

void LinuxOS::install_os_imp()
{
    cout << "install linux OS..." << endl;
}

WindowsOS::WindowsOS()
{

}

WindowsOS::~WindowsOS()
{

}

void WindowsOS::install_os_imp()
{
    cout << "install windows OS..." << endl;
}
