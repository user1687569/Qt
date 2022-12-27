#ifndef COMPILER_H
#define COMPILER_H
#include "component.h"

class Compiler
{
public:
    Compiler();
    ~Compiler();

    void Run();

private:
    Scanner* m_scanner;
    Parser* m_parser;
    GenerateMidCode* m_genMidCode;
    GenerateMachineCode* m_genMachineCode;
};

#endif // COMPILER_H
