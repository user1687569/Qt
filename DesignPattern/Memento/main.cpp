#include <iostream>
#include "memento.h"

using namespace std;

int main()
{
    Originator* originator = new Originator();
    originator->SetState("old");
    originator->PrintState();

    Memento* memento = originator->CreateMemento();
    originator->SetState("new");
    originator->PrintState();
    originator->RestoreToMemento(memento);
    originator->PrintState();
    return 0;
}
