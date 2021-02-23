package main

import "fmt"

func main() {

    data := []int{0, 1, 2, 3, 4, 5, 6, 7, 8, 9}
    s1 := data[8:] //{8, 9}
    s2 := data[:5] //{0, 1, 2, 3, 4}
    copy(s2, s1)   //dst:s2, src:s1

    fmt.Println(s2)   //[8 9 2 3 4]
	fmt.Println(data) //[8 9 2 3 4 5 6 7 8 9]
}