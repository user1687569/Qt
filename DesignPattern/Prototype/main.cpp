#include <iostream>
#include "prototype.h"

using namespace std;

int main()
{
    Monkey* monkey001 = new Monkey("MonkeyKing");
    monkey001->show();

    Monkey* monkey002 = monkey001->Clone();
    monkey002->show();

    delete monkey001;
    monkey002->show();
    return 0;
}
