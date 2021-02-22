package main

import "fmt"

func main() {
	array := []int{0, 1, 2, 3, 4, 5, 6, 7, 8, 9}
	s1 := array[:]
	fmt.Printf("s1=%d, len(s1)=[%d], cap(s1)=[%d]\n", s1, len(s1), cap(s1)) //s1=[0 1 2 3 4 5 6 7 8 9], len(s1)=[10], cap(s1)=[10]

	s2 := array[1]
	fmt.Printf("s2=%d\n", s2) //s2=1
	// fmt.Printf("len(s2)=[%d], cap(s2)=[%d]\n", len(s2), cap(s2)) // invalid argument s2 (type int) for cap (len)

	s3 := array[3:6:7]
	fmt.Printf("s3=%d, len(s3)=[%d], cap(s3)=[%d]\n", s3, len(s3), cap(s3)) // s3=[3 4 5], len(s3)=[3], cap(s3)=[4]

	s4 := array[:6]
	fmt.Printf("s4=%d, len(s4)=[%d], cap(s4)=[%d]\n", s4, len(s4), cap(s4)) // s4=[0 1 2 3 4 5], len(s4)=[6], cap(s4)=[10]

	s5 := array[3:]
	fmt.Printf("s5=%d, len(s5)=[%d], cap(s5)=[%d]\n", s5, len(s5), cap(s5)) // s5=[3 4 5 6 7 8 9], len(s5)=[7], cap(s5)=[7]
}