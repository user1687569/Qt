#include "filestream.h"
#include <iostream>

using namespace std;

FileStream::FileStream()
{

}

FileStream::~FileStream()
{

}

char *FileStream::Read(int number)
{
    cout << "FileStream Read..." << endl;
    return NULL;
}

bool FileStream::Seek(int position)
{
    cout << "FileStream Seek..." << endl;
    return true;
}

bool FileStream::Write(char *str)
{
    cout << "FileStream Write..." << endl;
    return true;
}
