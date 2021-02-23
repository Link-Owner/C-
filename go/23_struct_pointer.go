package main

import "fmt"

type Student struct {
	id		int
	name	string
	sex		byte //字符类型
	age		int
}

func main()  {
	//顺序初始化,每个成员都必须初始化
	var p_st1 *Student = &Student{1, "go", 'm', 22} //p_st1={1 go 109 22}
	fmt.Printf("*p_st1=%v\n", *p_st1)

	//指定成员初始化
	p_st2 := &Student{name:"go", age:22}
	fmt.Printf("p_str2 type is %T\n", p_st2) //p_str2 type is *main.Student
	fmt.Printf("p_st2=%v\n", *p_st2) //p_st2={0 go 0 22} 未初始化的变量变成0
}