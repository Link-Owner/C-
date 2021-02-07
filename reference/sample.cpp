#include <iostream>


/*
引用:内存地址的别名
引用在声明时候,必须对其初始化
引用作为函数参数时候,不进行初始化

*/


void xxx(int &a, int &b)
{
    /*
a=[0x7ffdb1c42100], b=[0x7ffdb1c42104]
a=[0x7ffdb1c42100], b=[0x7ffdb1c42104]
a=[0x7ffdb1c42100], b=[0x7ffdb1c42104]
    */
    printf("a=[%p], b=[%p]\n", &a, &b); //传进去的地址空间并没有被改变
    int temp = 0;
    temp = a;
    a = b;
    b = temp;
}



int main()
{
    int a = 10;
    int b = 20;
    // int &b = a;
    // int &c; 普通引用必须要初始化
    printf("a=[%p], b=[%p]\n", &a, &b);
    xxx(a, b);
    printf("a=[%p], b=[%p]\n", &a, &b);

    printf("a=[%d], b=[%d]\n", a, b);


    return 0;
}