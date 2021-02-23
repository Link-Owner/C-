package main

import "fmt"

func main() {

	var m1 map[int]string  //只是声明一个map，没有初始化, 此为空(nil)map
	fmt.Printf("m1=%d, len(m1)=%d, m1==nil?[%t]\n", m1, len(m1), m1 == nil) //m1=map[], len(m1)=0, m1==nil?[true]
	//m1[1] = "mike" //err, panic: assignment to entry in nil map
 
	//m2, m3的创建方法是等价的
	m2 := map[int]string{}
	m3 := make(map[int]string)
	fmt.Printf("m2=%d, m3=%d\n", m2, m3) //map[] map[]
 
	m4 := make(map[int]string, 2) //第2个参数指定长度
	fmt.Printf("m4=%d, len(m4)=[%d]\n", m4, len(m4)) //m4=[map[]], len(m4)=[0]
	//注意:len(m4)的值仍然为0,初始化的时候,给定长度为2,只是让编译器提前预留2个长度的大小,但此时内容为空
	//如果随着数据的增加,2个长度的大小不够用的话,编译器会自动扩容

	m4[1] = "aaa"
	m4[2] = "bbb"
	m4[3] = "ccc"
	fmt.Printf("m4=%v, len(m4)=[%d]\n",m4, len(m4)) //map[1:aaa 2:bbb 3:ccc] 3

	m5 := map[int]string{1:"mike", 2:"go"}
	fmt.Println("m5 = ", m5) //m5 = map[1:mike 2:go]
}

