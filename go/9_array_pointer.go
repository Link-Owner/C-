package main

import "fmt"

//注意:如果这个形参中没有定义数组的长度,则在实参中,也不要定义数组的长度
func modify(array *[5]int) {
    (*array)[0] = 10
    fmt.Println("In modify(), array values:", *array)  //[10 2 3 4 5]
}

func main() {
    array := [5]int{1, 2, 3, 4, 5}  //定义并初始化一个数组
    modify(&array)                 // 数组指针
    fmt.Println("In main(), array values:", array) //[10 2 3 4 5]
}