#include "observer.h"
#include "blogg.h"

ObserverCSDN::ObserverCSDN(std::__cxx11::string name, Blogg *blog)
    : m_name(name),
      m_blog(blog) {}

ObserverCSDN::~ObserverCSDN() {}

void ObserverCSDN::Update()
{
    string status = m_blog->GetStatus();
    cout << m_name << "------" << status << endl;
}
