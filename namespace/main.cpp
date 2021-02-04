#include "first.h"


int main()
{
    PathManager path; //定义一个类的对象,使用类的对象才可以调用xxx()函数
    path.xxx();
    // PathManager::xxx(); 如果想采用这种写法,则在PathManager类中xxx()必须声明成静态函数.这个是静态函数的调用规则.
    // 当然也可以使用namespace的方式,采用命令空间,这种写法也是没问题的.

    return 0;
}