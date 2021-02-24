package main

import "fmt"

type Student struct {
	id		int
	name	string
	sex		byte //字符类型
	age		int
}

func main()  {
	//3、先分配空间，再赋值
    s3 := new(Student)
    s3.id = 3
    s3.name = "xxx"
    fmt.Printf("s3=%v\n",s3) //s3=&{3 xxx 0 0}

    //4、普通变量和指针变量类型打印
    var s4 Student = Student{4, "yyy", 'm', 18}
    fmt.Printf("s4 = %v, &s4 = %v\n", s4, &s4) //s4 = {4 yyy 109 18}, &s4 = &{4 yyy 109 18}

    var p *Student = &s4
    //p.成员 和(*p).成员 操作是等价的
    p.id = 5
    (*p).name = "zzz"
    fmt.Printf("p=%v, *p=%v, s4=%v\n", p, *p, s4) //p=&{5 zzz 109 18}, *p={5 zzz 109 18}, s4={5 zzz 109 18}
}