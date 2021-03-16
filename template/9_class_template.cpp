#include <iostream>
#include <string>
using namespace std;

//类模板对象做参数

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
    int i;
    TypeName m_stringName;
    TypeAge m_intAge;
};

// void printPerson(Person <string, int> &p)
// {
//     p.showPerson();
// }
// void test01()
// {
//     Person<string, int> p1("xxx", 10);
// }


//参数模板化
template <class T1, class T2>
void printPerson(Person <T1, T2> &p)
{
    p.showPerson();
    cout << "111" << endl;
    cout << "T1 的类型:" << typeid(T1).name() << endl;
    cout << "T2 的类型:" << typeid(T2).name() << endl;
}

void test02()
{
    Person<string, int> p1("xxx", 7);
    printPerson(p1);
}


int main()
{
    test02();
    return 0;
}