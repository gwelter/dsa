package main

import "fmt"

func sum_of_naturals(n int) int {
	return n * (n + 1) / 2
}

func main() {
	n := 5
	fmt.Printf("Sum of naturais until %d id %d\n", n, sum_of_naturals(n))
}
