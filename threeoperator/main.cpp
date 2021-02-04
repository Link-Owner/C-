#include <iostream>


int main()
{

    int a = 10;
    int b = 20;
    (a < b ? a : b) = 30;//在C++语言中,三目运算符返回的是变量的本身,而不是变量的值
    //*(a < b ? &a : &b) = 30
    std::cout << "a = " << a << ", b = " << b << std::endl;

    return 0;
}