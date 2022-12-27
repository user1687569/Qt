#include <iostream>
#include <string>
#include "blogg.h"


Blogg::Blogg()
{

}

Blogg::~Blogg()
{

}

void Blogg::Attach(Observer *observer){
    m_observers.push_back(observer);
}

void Blogg::Remove(Observer *observer){
    m_observers.remove(observer);
}

void Blogg::Notify(){
    list<Observer *>::iterator iter = m_observers.begin();
    for(; iter != m_observers.end(); iter++)
        (*iter)->Update();
}

void Blogg::SetStatus(string str){
    m_status = str;
}

string Blogg::GetStatus(){
    return m_status;
}

BloggCSDN::BloggCSDN(string name)
    : m_name(name) {}

BloggCSDN::~BloggCSDN() {}

void BloggCSDN::SetStatus(string str){
    m_status = "CSDN通知: " + m_name + ", " + str;
}

string BloggCSDN::GetStatus(){
    return m_status;
}
