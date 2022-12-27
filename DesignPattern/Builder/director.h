#ifndef DIRECTOR_H
#define DIRECTOR_H
#include "builder.h"

class Builder;

class Director
{
public:
    Director(Builder *builder);
    ~Director();
    void Construct();

private:
    Builder *m_builder;
};

#endif // DIRECTOR_H
