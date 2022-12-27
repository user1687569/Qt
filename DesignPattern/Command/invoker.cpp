#include "invoker.h"

Invoker::Invoker(Command *command)
{
    m_command = command;
}

Invoker::~Invoker()
{

}

void Invoker::Invoke()
{
    m_command->Excute();
}
