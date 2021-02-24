//test.go
package test

//student01只能在本文件件引用，因为首字母小写
type student01 struct {
    Id   int
    Name string
}

//Student02可以在任意文件引用，因为首字母大写
type Student02 struct {
    Id   int
    name string
}