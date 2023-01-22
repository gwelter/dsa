package main

import "fmt"

func prime_factor(n int) {
	if n <= 1 {
		return
	}

	for i := 2; i*i <= n; i++ {
		for n%i == 0 {
			fmt.Printf("%d ", i)
			n = n / i
		}
	}
	if n > 1 {
		fmt.Printf("%d", n)
	}
}

func prime_factor_optimized(n int) {
	if n <= 1 {
		return
	}

	for n%2 == 0 {
		fmt.Printf("%d ", 2)
		n = n / 2
	}
	for n%3 == 0 {
		fmt.Printf("%d ", 3)
		n = n / 3
	}

	for i := 5; i*i <= n; i += 6 {
		for n%i == 0 {
			fmt.Printf("%d ", i)
			n = n / i
		}
		for n%i+2 == 0 {
			fmt.Printf("%d ", i+2)
			n = n/i + 2
		}
	}

	if n > 1 {
		fmt.Printf("%d", n)
	}
}

func main() {
	n1 := 6
	n2 := 450
	n3 := 7
	n4 := 999999936
	prime_factor_optimized(n1)
	fmt.Printf("\n")
	prime_factor_optimized(n2)
	fmt.Printf("\n")
	prime_factor_optimized(n3)
	fmt.Printf("\n")
	prime_factor_optimized(n4)
	fmt.Printf("\n")
}
