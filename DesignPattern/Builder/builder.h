#ifndef BUILDER_H
#define BUILDER_H
#include <string>
#include "product.h"
#include <string>

using namespace std;

class Builder
{
public:
    Builder();
    virtual ~Builder();
    virtual void BuildPartA(const string& buildPara) = 0;
    virtual void BuildPartB(const string& buildPara) = 0;
    virtual void BuildPartC(const string& buildPara) = 0;
    virtual Product* GetProduct() = 0;
};

class ConcreteBuilder : public Builder
{
public:
    ConcreteBuilder();
    ~ConcreteBuilder();

    void BuildPartA(const string& buildPara);
    void BuildPartB(const string& buildPara);
    void BuildPartC(const string& buildPara);
    Product *GetProduct();
};

#endif // BUILDER_H
