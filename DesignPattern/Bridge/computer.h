#ifndef COMPUTER_H
#define COMPUTER_H
#include "os.h"

class Computer
{
public:
    Computer();
    ~Computer();

    virtual void install_os() = 0;

protected:
    OS* m_os;
};

class AppleComputer : public Computer
{
public:
    AppleComputer(OS* os);
    ~AppleComputer();

    void install_os() override;
};

class HuaWeiComputer : public Computer
{
public:
    HuaWeiComputer(OS* os);
    ~HuaWeiComputer();

    void install_os() override;
};

#endif // COMPUTER_H
