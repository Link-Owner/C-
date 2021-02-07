#include <iostream>


struct Teacher
{
    char name[64];
    int age;
};

void Print(Teacher *ta)
{
    printf("name=[%s], age=[%d]\n", ta->name, ta->age);
}

void Print2(Teacher &ta)
{
    // 此时ta的内存地址不会发生变化,形参和实参指向同一块内存地址
    printf("ta=[%p\n]", &ta);
    printf("name=[%s], age=[%d]\n", ta.name, ta.age);
}

void Print3(Teacher ta)
{
    // 此时ta的内存地址会发生变化,,,,相当于tacopy一份数据出来给形参
    printf("ta=[%p\n]", &ta);
    printf("name=[%s], age=[%d]\n", ta.name, ta.age);
}

int main()
{

    Teacher ta = {"xiaoming", 15};
    Print(&ta);
    Print2(ta);
    printf("ta=[%p]\n", &ta);
    Print3(ta);

    return 0;
}