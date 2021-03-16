#include <iostream>
using namespace std;

// 函数模板

template <typename T> //告诉编译器,声明模板
void myswap(T &a, T &b)
{
    T temp = a;
    a = b;
    b = temp;
}

void test01()
{
    int a = 10;
    int b = 20;
    //自动推倒类型
    myswap(a, b);
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    //显示声明
    myswap<int>(a, b);
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
}


int main(void) 
{
    test01();
    return 0;
}