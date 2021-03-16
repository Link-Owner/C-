#include <iostream>
#include "singleton.hpp"
using namespace std;

class A
{
public:
    A() { }
    void xxx() {
        cout << "xxx" << endl;
    }
};


int main()
{
    cout << typeid(Singleton<A>::Instance()).name() << endl;
    return 0;
}