#include <iostream>
using namespace std;

class Person
{
public:
    // static inline Person* instance() {
    //     if (m_instance != NULL) {
    //         m_instance = new (std::nothrow) Person();
    //         return m_instance;
    //     }
    // }
public:
    Person();
    // ~Person();
    // void xxx();

// public:
//     static Person *m_instance;
};

// Person *Person::m_instance = NULL;

int main()
{
    Person p;
    // Person::instance();
    // Person *p1 = Person::instance();
    // Person *p2 = Person::instance();

    return 0;
}

