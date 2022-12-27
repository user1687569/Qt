#ifndef HANDLE_H
#define HANDLE_H


class Handle
{
public:
    virtual ~Handle();

    virtual void HandleRequest() = 0;
    void SetSuccessor(Handle* success);
    Handle* GetSuccessor();

protected:
    Handle();
    Handle(Handle* success);

private:
    Handle* m_success;
};

class ConcreteHandleA : public Handle
{
public:
    ConcreteHandleA();
    ~ConcreteHandleA();
    ConcreteHandleA(Handle* success);

    void HandleRequest();
};

class ConcreteHandleB : public Handle
{
public:
    ConcreteHandleB();
    ~ConcreteHandleB();
    ConcreteHandleB(Handle* success);

    void HandleRequest();
};


#endif // HANDLE_H
