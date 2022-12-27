#ifndef DECORATORSTREAM_H
#define DECORATORSTREAM_H
#include "stream.h"

using namespace std;

class DecoratorStream
{
public:
    DecoratorStream(Stream* stream);
    ~DecoratorStream();

    char* Read(int number);
    bool  Seek(int position);
    bool  Write(char* str);

private:
    Stream* m_stream;
};

#endif // DECORATORSTREAM_H
