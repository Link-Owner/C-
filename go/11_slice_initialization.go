package main

import "fmt"

func main() {
	//数组和切片的区别:数组里面的长度是一个固定的常量,数组不能修改,所以len和cap永远都是相同值
	var a [5]int
	fmt.Printf("len(a) = %d, cap(a) = %d\n", len(a), cap(a))  //len(a) = 5, cap(a) = 5

	//切片,[]里面可以为空或者为..., 切片的长度或容量可以不固定
	s := []int{}
	fmt.Printf("len(s) = %d, cap(s) = %d\n", len(s), cap(s))  //len(s) = 0, cap(s) = 0

	//自动推导类型,同时初始化
	s1 := []int{1, 2, 3}
	fmt.Printf("s1 = %d, len(s1) = %d, cap(s1) = %d\n", s1, len(s1), cap(s1)) //s1 = [1 2 3], len(s1) = 3, cap(s1) = 3

	//使用make函数: 格式  make(切片类型, 切片长度, 切片容量)
	s2 := make([]int, 3, 5)
	fmt.Printf("s2 = %d, len(s2) = %d, cap(s2) = %d\n", s2, len(s2), cap(s2)) //s2 = [0 0 0], len(s2) = 3, cap(s2) = 5

	//没有指定容量,容量和长度一样
	s3 := make([]int, 3)
	fmt.Printf("s3 = %d, len(s3) = %d, cap(s3) = %d\n", s3, len(s3), cap(s3)) //s3 = [0 0 0], len(s3) = 3, cap(s3) = 3
}