package main

import "fmt"

func modify(array [5]int) {
    array[0] = 10 //修改数组的第一个元素
    fmt.Printf("In modify(), array values:%d\n", array)
}

func main() {
    array := [5]int{1, 2, 3, 4, 5} 	// 定义并初始化一个数组
    modify(array)                  	// 传递给一个函数，并试图在函数体内修改这个数组内容
    fmt.Printf("In main(), array values:%d\n", array) 
}