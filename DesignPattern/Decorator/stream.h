#ifndef STREAM_H
#define STREAM_H

class Stream
{
public:
    Stream(){}
    ~Stream(){}

    virtual char* Read(int number) = 0;
    virtual bool  Seek(int position) = 0;
    virtual bool  Write(char* str) = 0;
};

#endif // STREAM_H
