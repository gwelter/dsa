package main

import "fmt"

func prime_naive(n int) bool {
	if n <= 1 {
		return false
	}

	for i := 2; i < n; i++ {
		if n%i == 0 {
			return false
		}
	}

	return true
}

func prime_sqr_n(n int) bool {
	if n <= 1 {
		return false
	}

	for i := 2; i*i <= n; i++ {
		if n%i == 0 {
			return false
		}
	}

	return true
}

func prime_optimized(n int) bool {
	if n <= 1 {
		return false
	}

	if n == 2 || n == 3 {
		return true
	}
	if n%2 == 0 || n%3 == 0 {
		return false
	}

	for i := 5; i*i <= n; i += 6 {
		if n%i == 0 || n%(i+2) == 0 {
			return false
		}
	}

	return true
}

func main() {
	n1 := 6
	n2 := 7
	n3 := 999999937
	n4 := 999999939

	fmt.Println("Is", n1, "a prime number (naive)?", prime_naive((n1)))
	fmt.Println("Is", n1, "a prime number (square root of n)?", prime_sqr_n((n1)))
	fmt.Println("Is", n1, "a prime number (optimized)?", prime_optimized((n1)))
	fmt.Println("Is", n2, "a prime number (naive)?", prime_naive((n2)))
	fmt.Println("Is", n2, "a prime number (square root of n)?", prime_sqr_n((n2)))
	fmt.Println("Is", n2, "a prime number (optimized)?", prime_optimized((n2)))
	fmt.Println("Is", n3, "a prime number (naive)?", prime_naive((n3)))
	fmt.Println("Is", n3, "a prime number (square root of n)?", prime_sqr_n((n3)))
	fmt.Println("Is", n3, "a prime number (optimized)?", prime_optimized((n3)))
	fmt.Println("Is", n4, "a prime number (naive)?", prime_naive((n4)))
	fmt.Println("Is", n4, "a prime number (square root of n)?", prime_sqr_n((n4)))
	fmt.Println("Is", n4, "a prime number (optimized)?", prime_optimized((n4)))
}
