#ifndef PROTOTYPE_H
#define PROTOTYPE_H
#include <iostream>

using namespace std;

class Prototype
{
public:
    Prototype();
    virtual ~Prototype();
    virtual Prototype* Clone() const = 0;
};

class Monkey : public Prototype
{
public:
    Monkey(string name);
    Monkey(const Monkey& cp);
    ~Monkey();

    Monkey* Clone() const;
    void show() const;

private:
    string m_name;
};

#endif // PROTOTYPE_H
