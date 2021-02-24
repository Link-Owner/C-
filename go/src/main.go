// main.go
package main

import (
    "fmt"
    "./test" //导入test包
)

func main() {
    //s1 := test.student01{1, "mike"} //err, cannot refer to unexported name test.student01

    //err, implicit assignment of unexported field 'name' in test.Student02 literal
    //s2 := test.Student02{2, "yoyo"}
    //fmt.Println(s2)

    var s3 test.Student02 //声明变量
    s3.Id = 1             //ok
    //s3.name = "mike"  //err, s3.name undefined (cannot refer to unexported field or method name)
    fmt.Println(s3)
}