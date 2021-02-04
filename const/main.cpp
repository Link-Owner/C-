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
    return 0;
}
//const声明的变量,在编译期间就已经分配内存了