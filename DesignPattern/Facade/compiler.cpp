#include "compiler.h"

Compiler::Compiler()
{
    m_scanner = new Scanner();
    m_parser = new Parser();
    m_genMidCode = new GenerateMidCode();
    m_genMachineCode = new GenerateMachineCode();
}

Compiler::~Compiler()
{

}

void Compiler::Run()
{
    m_scanner->Scan();;
    m_parser->Parse();
    m_genMidCode->GenCode();
    m_genMachineCode->GenMachineCode();
}
