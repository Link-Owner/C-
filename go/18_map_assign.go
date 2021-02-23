package main

import "fmt"

func main()  {
	m1 := map[int]string{1: "mike", 2: "yoyo"}
	m1[1] = "xxx"   //修改
	m1[3] = "lily"  //追加， go底层会自动为map分配空间
	fmt.Printf("m1=%v\n", m1) //m1=map[1:xxx 2:yoyo 3:lily]

	m2 := make(map[int]string, 10) //创建map
	m2[0] = "aaa"
	m2[1] = "bbb"
	fmt.Printf("m2=%v\n", m2)           //m2=map[0:aaa 1:bbb]
	fmt.Printf("m2[0]=%s, m2[1]=%s\n", m2[0], m2[1]) //m2[0]=aaa, m2[1]=bb
}
