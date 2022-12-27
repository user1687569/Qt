#include <iostream>
#include "mediator.h"
#include "colleage.h"

using namespace std;

int main()
{
    ConcreteMediator* mediator = new ConcreteMediator();
    ConcreteColleageA* colleageA = new ConcreteColleageA(mediator);
    ConcreteColleageB* colleageB = new ConcreteColleageB(mediator);

    mediator->IntroColleage(colleageA, colleageB);
    colleageA->SetState("old");
    colleageB->SetState("old");
    colleageA->Action();
    colleageB->Action();
    cout << endl;

    colleageA->SetState("new");
    colleageA->Action();
    colleageB->Action();
    cout << endl;

    colleageB->SetState("old");
    colleageB->Action();
    colleageA->Action();
    cout << endl;


    return 0;
}
