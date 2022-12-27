#ifndef COMPONENT_H
#define COMPONENT_H
#include <iostream>

using namespace std;

class Scanner
{
public:
    Scanner() {}
    ~Scanner() {}

    void Scan(){
        cout << "词法分析" << endl;
    }
};

class Parser
{
public:
    Parser() {}
    ~Parser() {}

    void Parse(){
        cout << "语法分析" << endl;
    }
};

class GenerateMidCode
{
public:
    GenerateMidCode() {}
    ~GenerateMidCode() {}

    void GenCode()
    {
        cout << "产生中间代码" << endl;
    }
};

class GenerateMachineCode
{
public:
    GenerateMachineCode() {}
    ~GenerateMachineCode() {}

    void GenMachineCode()
    {
        cout << "产生机器代码" << endl;
    }
};


#endif // COMPONENT_H
