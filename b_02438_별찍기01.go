package main

import "fmt"

func main() {
	fmt.Println("hello")
	var n int
	s := "*"
	fmt.Scanln(&n)
	for i := 0; i < int(n); i++ {
		fmt.Println(s)
		s += "s"
	}
}
