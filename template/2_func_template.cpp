#include <iostream>
using namespace std;

template <typename T> //函数体中必须指出数据类型
void func()
{
    cout << "func 函数调用" << endl;
}

void test01()
{
    //func(); //这样写调用错误,没有用到T
    func<int> (); //可以显示声明数据类型
}

int main()
{
    test01();

    return 0;
}