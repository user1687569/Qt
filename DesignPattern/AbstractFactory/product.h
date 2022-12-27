#ifndef PRODUCT_H
#define PRODUCT_H

class AbstractProductA
{
public:
    AbstractProductA();
    virtual ~AbstractProductA();
};

class AbstractProductB
{
public:
    AbstractProductB();
    virtual ~AbstractProductB();
};

class ProductA1 : public AbstractProductA
{
public:
    ProductA1();
    ~ProductA1();
};

class ProductA2 : public AbstractProductA
{
public:
    ProductA2();
    ~ProductA2();
};

class ProductB1 : public AbstractProductB
{
public:
    ProductB1();
    ~ProductB1();
};

class ProductB2 : public AbstractProductB
{
public:
    ProductB2();
    ~ProductB2();
};

#endif // PRODUCT_H
