package main

import "fmt"

func main() {

	a := [3]int{1, 2, 3}
    b := [3]int{1, 2, 3}
	c := [3]int{1, 2}
    fmt.Printf("a == b? [%t]\nb == c? [%t]\n", a == b, b == c) //true false

	var d [3]int
    d = a
	fmt.Println(d)  //[1 2 3]
	
	// var e [4]int 
    // e = a    cannot use a (type [3]int) as type [4]int in assignment
    // fmt.Println(e)  //[1 2 3]
}