#include <iostream>
#include "invoker.h"
#include "command.h"
#include "receiver.h"

using namespace std;

int main()
{
    Receiver* receiver = new Receiver();
    Command* command = new ConcreteCommand(receiver);
    Invoker* invoker = new Invoker(command);

    invoker->Invoke();
    return 0;
}
