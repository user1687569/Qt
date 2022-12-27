#ifndef NETWORKSTREAM_H
#define NETWORKSTREAM_H
#include "stream.h"

class NetworkStream : public Stream
{
public:
    NetworkStream();
    ~NetworkStream();

    char* Read(int number) override;
    bool  Seek(int position) override;
    bool  Write(char* str) override;
};

#endif // NETWORKSTREAM_H
