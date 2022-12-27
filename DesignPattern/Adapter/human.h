#ifndef HUMAN_H
#define HUMAN_H


class Human
{
public:
    Human();
    ~Human();

    virtual void DoWork() = 0;
};

class Developer : public Human
{
public:
    Developer();
    ~Developer();

    void DoWork();
};

#endif // HUMAN_H
