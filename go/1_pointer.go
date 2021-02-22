package main

import "fmt"

func main() {
	
	var a int = 10
	fmt.Printf("a = %d\n", a)   //变量的内存中的值
	fmt.Printf("a = %p\n", &a)	//变量的地址


	var p *int		//定义一个变量p,类型为 *int
	p = &a
	fmt.Printf("p = %p, a = %p\n", p, &a)
	*p = 100   //a = 100
	fmt.Printf("*p = %d, a = %d\n", *p, a)


	var p_null *int
	fmt.Println("p_null = ", p_null)
	// p_null = NULL    错误写法
	p_null = nil
	// *p_null = 100   指针p没有合法指向,写法错误
	
}