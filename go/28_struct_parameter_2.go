package main

import "fmt"

type Student struct {
	id		int
	name	string
	sex		byte //字符类型
	age		int
}

func printStudentPointer(p *Student) {
    p.id = 250
    fmt.Println("printStudentPointer p = ", p) //printStudentPointer p =  &{250 mike 109 18}
}

func main() {
    st1 := Student{1, "mike", 'm', 18}

    printStudentPointer(&st1)     	//引用(地址)传递，形参的修改会影响到实参
    fmt.Println("main st1 = ", st1) //main st1 =  {250 mike 109 18}
}