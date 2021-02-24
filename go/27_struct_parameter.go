package main

import "fmt"

type Student struct {
	id		int
	name	string
	sex		byte //字符类型
	age		int
}

func printStudentValue(tmp Student) {
    tmp.id = 250
    fmt.Println("printStudentValue tmp = ", tmp) //printStudentValue tmp =  {250 mike 109 18}
}

func main() {
	st := Student{1, "mike", 'm', 18}

    printStudentValue(st)        	//值传递，形参的修改不会影响到实参
    fmt.Println("main st = ", st) 	//main st =  {1 mike 109 18}
}