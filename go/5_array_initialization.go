package main

import "fmt"

func main() {
	//全部初始化
	var a [5] int = [5] int {0, 1, 2, 3, 4} //[5]和int之间可以有空格
	fmt.Printf("a = %d\n", a)

	b := [5]int{5, 6, 7, 8, 9} //int和{}之间可以有空格
	fmt.Printf("b = %d\n", b)

	//部分初始化,没有初始化的元素自动初始化为0
	c := [5]int{0, 1, 2}
	fmt.Printf("c = %d\n", c)    //c = [0 1 2 0 0]

	//指定某个元素初始化
	d := [5]int{2:10, 4:20}
	fmt.Printf("d = %d\n", d)    //d = [0 0 10 0 20]

	// 通过初始化值确定数组长度
	e := [...]int{1, 2, 3}      
	fmt.Printf("len(e) = %d, e = %d\n", len(e), e)    //len(e) = 3, e = [1 2 3]
}