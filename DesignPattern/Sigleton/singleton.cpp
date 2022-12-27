#include "singleton.h"

Singleton* Singleton::m_singleton = 0;

Singleton::Singleton()
{
    std::cout << "Singleton..." << std::endl;
}

Singleton *Singleton::Instance()
{
    if(m_singleton == 0)
    {
        m_singleton = new Singleton();
    }

    return m_singleton;
}
