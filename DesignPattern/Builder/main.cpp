#include <iostream>
#include "builder.h"
#include "product.h"
#include "director.h"

using namespace std;

int main()
{
    Director* director = new Director(new ConcreteBuilder());
    director->Construct();
    return 0;
}
