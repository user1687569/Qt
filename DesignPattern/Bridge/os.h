#ifndef OS_H
#define OS_H


class OS
{
public:
    OS();
    ~OS();

    virtual void install_os_imp() = 0;
};

class AppleOS : public OS
{
public:
    AppleOS();
    ~AppleOS();

    void install_os_imp();
};

class LinuxOS : public OS
{
public:
    LinuxOS();
    ~LinuxOS();

    void install_os_imp();
};

class WindowsOS : public OS
{
public:
    WindowsOS();
    ~WindowsOS();

    void install_os_imp();
};

#endif // OS_H
