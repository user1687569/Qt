#ifndef COLLEAGE_H
#define COLLEAGE_H
#include <string>
#include "mediator.h"

using namespace std;

class Mediator;
class Colleage
{
public:
    Colleage();
    Colleage(Mediator* mediator);
    virtual ~Colleage();

    virtual void Action() = 0;
    virtual void SetState(const string& state) = 0;
    virtual string GetState() = 0;

protected:
    Mediator* m_mediator;
};

class ConcreteColleageA : public Colleage
{
public:
    ConcreteColleageA();
    ConcreteColleageA(Mediator* mediator);
    ~ConcreteColleageA();

    void Action();
    void SetState(const string& state);
    string GetState();

private:
    string m_state;
};

class ConcreteColleageB : public Colleage
{
public:
    ConcreteColleageB();
    ConcreteColleageB(Mediator* mediator);
    ~ConcreteColleageB();

    void Action();
    void SetState(const string& state);
    string GetState();

private:
    string m_state;
};

#endif // COLLEAGE_H
