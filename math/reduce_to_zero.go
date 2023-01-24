package main

import "fmt"

func steps_to_zero(n int) int {
	steps := 0
	for n > 0 {
		if n%2 == 0 {
			n = n / 2
		} else {
			n--
		}
		steps++
	}
	return steps
}

func main() {
	n1 := 8
	n2 := 14
	fmt.Printf("Steps to reduce %d to 0: %d\n", n1, steps_to_zero(n1))
	fmt.Printf("Steps to reduce %d to 0: %d\n", n2, steps_to_zero(n2))
}
