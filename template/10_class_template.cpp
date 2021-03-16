#include <iostream>
#include <string>
using namespace std;

//子类继承父类时候,要显示指出父类中T的类型
//如果不指定,编译器无法给子类分配内存


template <class T>
class Base
{
public:
    Base() { }
};

class Son : public Base<int>
{

};

int main()
{
    return 0;
}