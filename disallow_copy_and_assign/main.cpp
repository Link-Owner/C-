#include <iostream>


// A macro to disallow the copy constructor and operator= functions 
// This should be used in the priavte:declarations for a class
#define    DISALLOW_COPY_AND_ASSIGN(TypeName) \
            TypeName(const TypeName&); \
            TypeName& operator=(const TypeName&)

class Test {

public:
    Test(int t);
    ~Test();

private:
    DISALLOW_COPY_AND_ASSIGN(Test);
};

// 声明私有的拷贝构造函数和赋值构造函数，但不去定义实现它们，有三方面的作用：
// 1.声明了拷贝构造函数和赋值函数，阻止了编译器暗自创建的专属版本．
// 2.声明了private,阻止了外部对它们的调用．
// 3.不定义它们，可以保证成员函数和友元函数调用它们时，产生一个连接错误．
// 上述解决方法，面对在成员函数和友元函数企图拷贝对象时，会产生连接器错误．


// 上述解决方法，面对在成员函数和友元函数企图拷贝对象时，会产生连接器错误．
// 遵循错误发现越早越好的原则，我们希望将连接期错误移至编译期．
// 解决思路是：设计一个专门为了阻止copying动作(包含copy和assign)而设计的基类


class Uncopyable {
protected:
    Uncopyable() {}
    ~Uncopyable() {}

private:
    Uncopyable(const Uncopyable&);
    Uncopyable& operator=(const Uncopyable&);

};
class Test:private Uncopyable{
                            //class不再声明copy构造函数或copy assignment操作符
};

// 如上述代码，当任何人(包括member函数或friend函数)尝试拷贝Test对象时，编译器便试着生成一个copy构造函数和一个copy assignment操作符.
// 编译器自动生成这些函数时，会调用其基类的对应函数，而基类中这些函数是private，因而那些调用会被编译器拒绝，产生编译器错误．
// 像Uncopyable这样的基类，没有non-static成员变量，没有virtual函数，也没有virtual base classes，可以满足空白基类最优化的条件(empty base optimization)．

int main()
{





    return 0;
}