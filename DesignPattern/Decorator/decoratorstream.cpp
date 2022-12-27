#include "decoratorstream.h"
#include <iostream>

using namespace std;

DecoratorStream::DecoratorStream(Stream *stream)
    : m_stream(stream)
{

}

DecoratorStream::~DecoratorStream()
{
    delete m_stream;
}

char *DecoratorStream::Read(int number)
{
    m_stream->Read(number);
    cout << "Added decorator..." << endl;
}

bool DecoratorStream::Seek(int position)
{
    m_stream->Seek(position);
    cout << "Added decorator..." << endl;
}

bool DecoratorStream::Write(char *str)
{
    m_stream->Write(str);
    cout << "Added decorator..." << endl;
}
