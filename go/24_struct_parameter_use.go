package main

import "fmt"

type Student struct {
	id		int
	name	string
	sex		byte //字符类型
	age		int
}

func main()  {
	    //1、打印成员
		var s1 Student = Student{1, "mike", 'm', 18}
		//结果：id = 1, name = mike, sex = m, age = 18
		fmt.Printf("id = %d, name = %s, sex = %c, age = %d\n", s1.id, s1.name, s1.sex, s1.age)
	
		//2、成员变量赋值
		var s2 Student
		s2.id = 2
		s2.name = "yoyo"
		s2.sex = 'f'
		s2.age = 16
		fmt.Printf("s2=%v\n", s2) //s2={2 yoyo 102 16}
}