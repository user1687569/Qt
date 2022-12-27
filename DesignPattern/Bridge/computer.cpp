#include "computer.h"

Computer::Computer()
{

}

Computer::~Computer()
{

}

AppleComputer::AppleComputer(OS *os)
{
    m_os = os;
}

AppleComputer::~AppleComputer()
{
    delete m_os;
}

void AppleComputer::install_os()
{
    m_os->install_os_imp();
}

HuaWeiComputer::HuaWeiComputer(OS *os)
{
    m_os = os;
}

HuaWeiComputer::~HuaWeiComputer()
{
    delete m_os;
}

void HuaWeiComputer::install_os()
{
    m_os->install_os_imp();
}
