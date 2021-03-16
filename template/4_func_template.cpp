#include <iostream>
using namespace std;

//普通函数和模板函数的区别
//1.普通函数可以发生隐式类型转换
//2.函数模板,采用自动推倒类型,不可以发生隐士类型转换
//3.函数模板,采用显示类型,可以实现隐士类型转换


int myAdd01(int a, int b)
{
    return a + b;
}

void test01()
{
    int a = 10;
    int b = 20;
    myAdd01(a, b); //此时是没有任何隐士转换的
    cout << "a + b = " << myAdd01(a, b) << endl;

    char c = 'c';
    char d = 'd';
    myAdd01(c, d); //此时是有隐士类型转换的
    cout << "c + d = " << myAdd01(c, d)<< endl;

    char e = 'e';
    myAdd01(a, e); //此时是有隐士类型转换的
    cout << "a + e = " << myAdd01(a, e)<< endl;
}

template <typename T>
int myAdd02(T &a, T &b) //引用的本质是const指针,指针无法做隐士推倒
{
    return a + b;
}

void test02()
{
    int a = 10;
    int b = 20;
    char c = 'c';
    char d = 'd';
    myAdd02(a, b); //此时是没有任何隐士转换的,允许
    cout << "a + b = " << myAdd01(a, b) << endl;

    // myAdd02(a, c); //自动推倒类型,因为a和c是不同类型,编译器无法推倒
    // myAdd02<int>(a,c); //即使是显示声明也不可以 (如果函数模板部分改成值传递则可以)
}


int main()
{
    test01();
    test02();
    return 0;
}