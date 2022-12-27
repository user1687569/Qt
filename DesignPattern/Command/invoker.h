#ifndef INVOKER_H
#define INVOKER_H
#include "command.h"

class Command;

class Invoker
{
public:
    Invoker(Command* command);
    ~Invoker();

    void Invoke();

private:
    Command* m_command;
};

#endif // INVOKER_H
