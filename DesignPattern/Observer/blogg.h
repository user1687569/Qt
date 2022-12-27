#ifndef Blogg_H
#define Blogg_H
#include <iostream>
#include <list>
#include <string>
#include "observer.h"

using namespace std;
class Observer;

class Blogg
{
public:
    Blogg();
    virtual ~Blogg();

    void Attach(Observer* observer);

    void Remove(Observer* observer);

    void Notify();

    virtual void SetStatus(string str);

    virtual string GetStatus();

protected:
    string m_status;

private:
    list<Observer *> m_observers;
};

class BloggCSDN : public Blogg
{
public:
    BloggCSDN(string name);
    ~BloggCSDN();

    void SetStatus(string str);

    string GetStatus();
private:
    string m_name;
};

#endif // Blogg_H
