package main

import "fmt"

func main() {
	var p *int
	//类似于C语言中的动态分配内存空间    不需要关心申请完内存之后的释放问题
	p = new(int)  
	fmt.Printf("*p = %d\n", *p)    //*p默认值为0

	*p = 100
	fmt.Printf("*p = %d\n", *p)

	q := new(int)
	*q = 200
	fmt.Printf("*q = %d\n", *q)
}