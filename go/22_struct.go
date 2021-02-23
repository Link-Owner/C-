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
	var st1 Student = Student{1, "go", 'm', 22} //st1={1 go 109 22}
	fmt.Printf("st1=%v\n", st1)

	//指定成员初始化
	st2 := Student{name:"go", age:22}
	fmt.Printf("st2=%v\n", st2) //st2={0 go 0 22} 未初始化的变量变成0
}