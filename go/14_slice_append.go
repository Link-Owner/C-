package main

import "fmt"

func main() {

	s1 := []int{}
	fmt.Printf("len(s1)=[%d], cap(s1)=[%d]\n", len(s1), cap(s1)) //len(s1)=[0], cap(s1)=[0]
	fmt.Printf("s1=%d\n", s1) //s1=[]

	s1 = append(s1, 1)
	s1 = append(s1, 2)
	s1 = append(s1, 3)
	fmt.Printf("len(s1)=[%d], cap(s1)=[%d]\n", len(s1), cap(s1)) //len(s1)=[3], cap(s1)=[4]
	fmt.Printf("s1=%d\n", s1) //s1=[1 2 3]

	s2 := []int{1, 2, 3}
	s2 = append(s2, 4)
	s2 = append(s2, 5) //在切片的末尾加上数据
	fmt.Printf("len(s2)=[%d], cap(s2)=[%d]\n", len(s2), cap(s2)) //len(s2)=[5], cap(s2)=[6]
	fmt.Printf("s2=%d\n", s2) //s2=[1 2 3 4 5]
}