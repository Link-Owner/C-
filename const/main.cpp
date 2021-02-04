#include <iostream>
#include <string.h>

struct Teacher
{
    Teacher(const char *name, int age)   //string转换成const char*
    {
        name = new char[age];
    }
public:
    char *m_name; 
    int m_age;
};

void printTeacher(const Teacher* ta)
{
    // ta->age = 10; 指针所指向的值不能被修改,这个写法错误
    // ta->name = "xiaohua"; 指针所指向的值不能被修改,这个写法错误
    std::cout << "name = " << ta->m_name << std::endl;
    std::cout << "age = " << ta->m_age << std::endl;
}

void printTeacher02(Teacher* const ta)
{
    ta->m_age = 10;
    // strncpy(ta->name, "111", strlen("111"));  这样使用,虽然不会报错,但是输出 111oming
    std::cout << "name = " << ta->m_name << std::endl;
    std::cout << "age = " << ta->m_age << std::endl;
}


//const声明的变量,在编译期间就已经分配内存了

// const声明的变量是由编译器在编译阶段处理的
// define的关键字是在预处理阶段由预处理器处理的,单纯的提供文本替换


void func1()
{
    #define n 10
    const int m = 20;
    // #undef a
}

void func2()
{
    //当func1函数没有使用undef的时候,n是可用的,反之不可用.
    //m是一个const 在func2函数中,无论怎么样,都不可以使用,有类型检查
    std::cout << "a=" << n << "b=" << m << std::endl;
}

int main()
{
    const int a = 10;
    int const b = 20;  //上面两种写法一样,

    const int *c = &a;  //指针所指向的内存空间的值不能被修改
    int* const d = NULL; //这里是一个常量指针,指针所指向的内存可以被修改,但是指针的值不可以被修改

    Teacher ta = {"xiaoming", 10};
    Teacher tb("lihua", 20);  //这个会调用struct的构造函数

    printTeacher(&ta);
    printTeacher02(&tb);

    func1();
    func2();
    return 0;
}