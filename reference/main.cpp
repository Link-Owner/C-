#include <iostream>


// 引用很像一个常量???

struct Teacher
{
    char name[64];
    int age;

    int &a;
    int &b;
};

// 引用在C++内部是一个常量指针
// Type &var = name; Type *const name
// C++编译器在编译过程中使用常量指针作为引用的内部实现,因此引用所占用的内存空间大小和指针所占用的内存空间大小相同
/*
void func(int &a)
{
    a = 5;
}
void func(const *int a)
{
    *a = 5;
}
*/

void xxx(int &a1)
{
    a1 = 100;
}


int main()
{
    printf("sizeof(Teacher)=[%ld]\n", sizeof(Teacher)); //经验证,得出的结果是88,说明引用占用内存空间
    int a = 10;
    printf("a=[%d]\n", a);


    return 0;
}