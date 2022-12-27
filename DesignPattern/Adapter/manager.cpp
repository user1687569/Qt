#include "manager.h"

Manager::Manager(Developer *developer)
{
    m_developer = developer;
}

Manager::~Manager()
{

}

void Manager::develop_a_function()
{
    m_developer->DoWork();
}
