package main

import "fmt"

func swap01(a, b int) {
    a, b = b, a
    fmt.Printf("swap01: a = %d, b = %d\n", a, b)
}

func swap02(x, y *int) {
	*x, *y = *y, *x
	fmt.Printf("swap02: x = %d, y = %d\n", *x, *y)
}

func main() {
	a, b := 10, 20

	//交换两个变量的值
	swap01(a, b) //值传递
	fmt.Printf("main swap01: a = %d, b = %d\n", a, b)

	swap02(&a, &b) //地址传递
	fmt.Printf("main swap02: a = %d, b = %d\n", a, b)
}