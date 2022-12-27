#include "command.h"

Command::Command()
{

}

Command::~Command()
{

}

ConcreteCommand::ConcreteCommand(Receiver *receiver)
{
    m_receiver = receiver;
}

ConcreteCommand::~ConcreteCommand()
{

}

void ConcreteCommand::Excute()
{
    m_receiver->Action();
}
