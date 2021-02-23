package main

import "fmt"

func test(s []int) { //切片做函数参数
    s[0] = -1
    for i, v := range s {
        fmt.Printf("test : s[%d]=%d, ", i, v) //s[0]=-1, s[1]=1, s[2]=2, s[3]=3, s[4]=4
    }
    fmt.Println("\n")
}

func main() {
    slice := []int{0, 1, 2, 3, 4}
    test(slice)

    for i, v := range slice {
        fmt.Printf("main : slice[%d]=%d, ", i, v) //slice[0]=-1, slice[1]=1, slice[2]=2, slice[3]=3, slice[4]=4
        
    }
    fmt.Println("\n")
}