#include <iostream>
#include "observer.h"
#include "blogg.h"


using namespace std;

int main()
{
    Blogg* Blogg = new BloggCSDN("Blockchain");
    Observer *lee = new ObserverCSDN("bitcoin", Blogg);
    Blogg->Attach(lee);

    Observer *mei = new ObserverCSDN("ethereum", Blogg);
    Blogg->Attach(mei);

    Blogg->SetStatus("Boost");
    Blogg->Notify();
    return 0;
}
