package main

import "fmt"

func main()  {
	func DeleteMap(m map[int]string, key int) {
		delete(m, key) //删除key值为2的map
		for k, v := range m {
			fmt.Printf("len(m)=%d, %d ----> %s\n", len(m), k, v)
			//len(m)=2, 1 ----> mike
			//len(m)=2, 3 ----> lily
		}
	}
	
	func main() {
		m := map[int]string{1: "mike", 2: "yoyo", 3: "lily"}
		DeleteMap(m, 2) //删除key值为2的map
		for k, v := range m {
			fmt.Printf("len(m)=%d, %d ----> %s\n", len(m), k, v)
			//len(m)=2, 1 ----> mike
			//len(m)=2, 3 ----> lily
		}
	}
}