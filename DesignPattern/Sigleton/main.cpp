#include <iostream>
#include "singleton.h"

using namespace std;

int main()
{
    Singleton* singleton = Singleton::Instance();
    return 0;
}
