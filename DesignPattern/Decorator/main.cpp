#include <iostream>
#include "stream.h"
#include "filestream.h"
#include "networkstream.h"
#include "decoratorstream.h"

using namespace std;

int main()
{
    FileStream* fileStream = new FileStream();
    DecoratorStream* newStream = new DecoratorStream(fileStream);

    fileStream->Read(3);
    fileStream->Seek(5);

    newStream->Read(1);
    newStream->Seek(2);

    return 0;
}
