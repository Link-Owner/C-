#include <iostream>


int getA()
{
    int a;
    a = 10;
    return a;
}

int &getA2()
{
    // 返回静态变量或者全局变量,则没问题
    static int b;  //如果此处不加static,变量b的内存地址被析构,则编译器报错.函数返回值不要用引用!!!!!!
    b = 20;
    return b;
}



int main()
{

    int a1 = getA();
    int a2;
    a2 = getA2();

    printf("a1=[%d], a2=[%d]\n", a1, a2);
    return 0;
}