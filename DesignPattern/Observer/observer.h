#ifndef OBSERVER_H
#define OBSERVER_H
#include <iostream>
#include <string>
#include "blogg.h"

using namespace std;
class Blogg;

class Observer
{
public:
    Observer() {}
    virtual ~Observer() {}

    virtual void Update() {}
};

class ObserverCSDN : public Observer
{

private:
    string m_name;
    Blogg *m_blog;

public:
    ObserverCSDN(string name, Blogg* blog);
    ~ObserverCSDN();

    void Update();
};

#endif // OBSERVER_H
