#ifndef MEDIATOR_H
#define MEDIATOR_H
#include "colleage.h"

class Colleage;

class Mediator
{
public:
    Mediator();
    virtual ~Mediator();

    virtual void DoActionFromAtoB() = 0;
    virtual void DoActionFromBtoA() = 0;
};

class ConcreteMediator : public Mediator
{
public:
    ConcreteMediator();
    ConcreteMediator(Colleage* colleageA, Colleage* colleageB);
    ~ConcreteMediator();

    void SetConreteColleageA(Colleage* colleageA);
    void SetConreteColleageB(Colleage* colleageB);

    Colleage* GetColleageA();
    Colleage* GetColleageB();

    void IntroColleage(Colleage* colleageA, Colleage* colleageB);
    void DoActionFromAtoB();
    void DoActionFromBtoA();

private:
    Colleage* m_colleageA;
    Colleage* m_colleageB;
};

#endif // MEDIATOR_H
