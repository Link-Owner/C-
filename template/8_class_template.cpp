#include <iostream>
#include <string>
using namespace std;

//普通类中成员函数一开始就可以创建
//模板类中成员函数在调用时候才可以创建
class Person2
{
public:
    void xxx();
    void yyy();
    void zzz();
};


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


int main()
{
    cout << sizeof(Person2) << endl; // 1
    return 0;
}