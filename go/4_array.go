package main

import "fmt"

func main() {
	var id [10]int	//定义一个int型数组,长度为10
	fmt.Printf("len(id) = %d\n", len(id))

	// var n int
	// var c [n]int    non-constant array bound n

	const x int = 10	//这个写法是可以的,但是不建议这么使用
	var y [x]int
	fmt.Printf("cap(y) = %d\n", cap(y))

	var a [10]int
    for i := 0; i < 10; i++ {
        a[i] = i + 1
        fmt.Printf("a[%d] = %d\n", i, a[i])
    }

    //range具有两个返回值，第一个返回值是元素的数组下标，第二个返回值是元素的值
    for i, v := range a {
        fmt.Println("a[", i, "]=", v)
    }
}