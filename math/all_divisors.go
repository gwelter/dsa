package main

import "fmt"

func all_divisors_naive(n int) {
	for i := 1; i <= n; i++ {
		if n%i == 0 {
			fmt.Printf("%d ", i)
		}
	}
	fmt.Printf("\n")
}

func all_divisors_in_pair(n int) {
	for i := 1; i*i <= n; i++ {
		if n%i == 0 {
			if n/i == i {
				fmt.Printf("%d; ", i)
			} else {
				fmt.Printf("%d * %d; ", i, n/i)
			}
		}
	}
	fmt.Printf("\n")
}

func all_divisors_in_order(n int) {
	i := 1
	for ; i*i < n; i++ {
		if n%i == 0 {
			fmt.Printf("%d ", i)
		}
	}
	for ; i >= 1; i-- {
		if n%i == 0 {
			fmt.Printf("%d ", n/i)
		}
	}
	fmt.Printf("\n")
}

func main() {
	n1 := 22
	n2 := 100
	n3 := 1000
	fmt.Printf("All divisors of %d: ", n1)
	all_divisors_naive(n1)
	fmt.Printf("All divisors of %d: ", n2)
	all_divisors_in_pair(n2)
	fmt.Printf("All divisors of %d: ", n3)
	all_divisors_in_order(n3)
}
