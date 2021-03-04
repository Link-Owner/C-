#include <iostream>

class A {
public:
    A() : a(0) {}  //形参列表初始化的方式
    void AA() {
        std::cout << "this is AA" << std::endl;
    }
public:
    int a;
};

class B : public A {
public:
    friend class C;
private: //私有的方法，类C想要使用该方法，必须通过友元的方式
    void BB() {
        std::cout << "this is BB" << std::endl;
    }
private:
    int b;
};

class C : public B {
public:
    void CC() {
        std::cout << "this is CC" << std::endl;
    }
    void test();
public:
    int c;
};


void C::test()
{
    // std::cout << b << "this is tset" << std::endl;  私有成员不可访问
    std::cout << a << "this is tset" << std::endl;
    // B::BB();
    // A::AA();
    BB();
    AA(); //以上两种方式都可以
}

int main()
{
    C c;
    c.test();
}