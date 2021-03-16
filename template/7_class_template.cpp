#include <iostream>
#include <string>
using namespace std;

//类模板没有自动推倒类型
//类模板在模板参数中可以有默认参数

template <class TypeName, class TypeAge = int>
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
    Person<string, int> p("xxx", 19); //只能用显示类型推倒
    p.showPerson();

    Person<string> p2("xxx", 19); //只能用显示类型推倒
    p2.showPerson();
}

int main()
{
    test01();
    return 0;
}