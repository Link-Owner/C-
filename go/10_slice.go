package main

import "fmt"

func main() {
	a := []int{1, 2, 3, 4, 5}
	s := a[1:4:5]    //上面a的切片cap为5,这个s的最后一个参数不能超过5
	fmt.Printf("s = %d\n", s)
	fmt.Printf("len(s) = %d\n", len(s))  //长度 4-1
	fmt.Printf("cap(s) = %d\n", cap(s))  //容量 5-1
}

// s = [2 3 4]
// len(s) = 3
// cap(s) = 4