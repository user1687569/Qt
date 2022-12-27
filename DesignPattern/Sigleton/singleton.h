#ifndef SINGLETON_H
#define SINGLETON_H
#include <iostream>

class Singleton
{
public:
    Singleton();
    static Singleton *Instance();

private:
    static Singleton* m_singleton;
};

#endif // SINGLETON_H
