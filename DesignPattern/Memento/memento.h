#ifndef MEMENTO_H
#define MEMENTO_H
#include <string>

using namespace std;

class Memento;
class Originator
{
public:
    typedef string State;
    Originator();
    Originator(const State& state);
    ~Originator();

    Memento* CreateMemento();
    void SetMemento(Memento* memento);
    void RestoreToMemento(Memento* memento);
    State GetState();
    void SetState(const State& state);
    void PrintState();

private:
    State m_state;
    Memento* m_memento;
};

class Memento
{
private:
    friend class Originator;
    typedef string State;
    Memento();
    Memento(const State& state);
    ~Memento();

    void SetState(const State& state);
    State GetState();

private:
    State m_state;
};

#endif // MEMENTO_H
