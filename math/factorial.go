package main

import "fmt"

// Time complecity Θ(n)
// Auxiliar space complexity Θ(1)
func factorial_loop(n int) int {
	factorial := 1
	for i := n; i >= 1; i-- {
		factorial *= i
	}
	return factorial
}

// Time complecity Θ(n)
// Auxiliar space complexity Θ(n)
func factorial_recursive(n int) int {
	if n <= 1 {
		return 1
	}
	return n * factorial_recursive(n-1)
}

func main() {
	fmt.Println("Factorial of 5 is ", factorial_loop(5))
	fmt.Println("Factorial of 6 is ", factorial_recursive(6))
}
