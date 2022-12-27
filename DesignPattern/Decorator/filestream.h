#ifndef FILESTREAM_H
#define FILESTREAM_H
#include  "stream.h"

class FileStream : public Stream
{
public:
    FileStream();
    ~FileStream();

    char *Read(int number) override;
    bool  Seek(int position) override;
    bool  Write(char* str) override;
};

#endif // FILESTREAM_H
