package main

import "fmt"

func main()  {
	m1 := map[int]string{1: "mike", 2: "yoyo", 3: "lily"}
    //迭代遍历1，第一个返回值是key，第二个返回值是value
    for k, v := range m1 {
        fmt.Printf("%d ----> %s\n", k, v)
        //1 ----> mike
        //2 ----> yoyo
        //3 ----> lily
    }

    delete(m1, 2) //删除key值为2的map

    for k, v := range m1 {
        fmt.Printf("%d ----> %s\n", k, v)
        //1 ----> mike
        //3 ----> lily
    }
}