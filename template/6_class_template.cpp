#include <iostream>
#include <string>
using namespace std;

//类模板
template <class TypeName, class TypeAge>
class Person
{
public:
    Person(TypeName stringName, TypeAge intAge) {
        this->m_stringName = stringName;
        this->m_intAge = intAge;
    }
    void showPerson() {
        cout << "m_stringName = " << m_stringName << " \nm_intAge = " << m_intAge << endl;
    }

public:
    TypeName m_stringName;
    TypeAge m_intAge;
};


void test01()
{
    Person<string, int> p1("xxx", 12);
    p1.showPerson();
}

int main()
{
    test01();
    return 0;
}