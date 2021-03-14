#include <iostream>
using namespace std;

class Person
{
public:
    Person()
    {

    }
};

void xxx(int a)
{
    cout << (int*)&a << endl;
}

const int func()
{
    int a = 10;
    return a;
}


int main()
{
    Person p;

    int a = 10;
    cout << (int*)&a << endl;
    xxx(a);


    int b = func();


    return 0;
}