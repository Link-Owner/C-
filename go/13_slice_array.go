package main

import "fmt"

func main() {

	s := []int{0, 1, 2, 3, 4, 5, 6, 7, 8, 9}

	s1 := s[2:5]       //[2 3 4]
	s1[2] = 100        //修改切片某个元素改变底层数组
	fmt.Printf("s1=%d, cap(s1)=%d\n", s1, cap(s1)) //[2 3 100]
	fmt.Printf("s=%d\n", s) //[0 1 2 3 100 5 6 7 8 9]

	s2 := s1[2:6] //新切片依旧指向原底层数组 [100 5 6 7]
	s2[3] = 200
	fmt.Printf("s2=%d, cap(s2)=%d\n", s2, cap(s2)) //[100 5 6 200]
	fmt.Printf("s=%d\n", s) //[0 1 2 3 100 5 6 200 8 9]
}