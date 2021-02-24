package main

import "fmt"

type Student struct {
	id		int
	name	string
	sex		byte //字符类型
	age		int
}

func main()  {
	s1 := Student{1, "mike", 'm', 18}
    s2 := Student{1, "mike", 'm', 18}

    fmt.Println("s1 == s2", s1 == s2) //s1 == s2 true
    fmt.Println("s1 != s2", s1 != s2) //s1 != s2 false
}