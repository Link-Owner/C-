#include <iostream>
#include <map>


class Teacher
{
public:
    void xxx();

public:
    int a;
    // const auto b = 10; static auto b = 10; 均错误
    static const auto b = 10;
};


int main()
{

    // auto age;  auto关键字在声明的时候，必须初始化，这样写是有问题的。
    auto name = "xiaomiang";
    std::map<int, std::string> default_map; //标准写法
    std::map<int, std::string>::iterator it = default_map.begin();
    for (; it != default_map.end(); it++) {
        //do something
    }

    std::map<int, std::string> auto_map;
    for (auto it = auto_map.begin(); it != auto_map.end(); it++) {
        // do something
    }

    return 0;
}

/* 
1) auto不能在函数的参数中使用。
这个应该很容易理解，我们在定义函数的时候只是对参数进行了声明，指明了参数的类型，但并没有给它赋值，只有在实际调用函数的时候才会给参数赋值；而 auto 要求必须对变量进行初始化，所以这是矛盾的。

2) auto 不能作用于类的非静态成员变量（也就是没有 static 关键字修饰的成员变量）中。

3) auto 关键字不能定义数组，比如下面的例子就是错误的：
char url[] = "http://c.biancheng.net/";
auto  str[] = url;  //arr 为数组，所以不能使用 auto

4) auto 不能作用于模板参数，请看下面的例子：
template <typename T>
class A{
    //TODO:
};
int  main(){
    A<int> C1;
    A<auto> C2 = C1;  //错误
    return 0;
}
*/