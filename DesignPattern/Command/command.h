#ifndef COMMAND_H
#define COMMAND_H
#include "receiver.h"

class Receiver;
class Command
{
public:
    Command();
    virtual ~Command();

    virtual void Excute() = 0;
};

class ConcreteCommand : public Command
{
public:
    ConcreteCommand(Receiver* receiver);
    ~ConcreteCommand();

    void Excute();

private:
    Receiver* m_receiver;
};

#endif // COMMAND_H
