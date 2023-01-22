package main

import "fmt"

func print_primes_before(n int) {
	prime := make([]bool, n+1)
	for i := 2; i <= n; i++ {
		prime[i] = true
	}
	for p := 2; p*p <= n; p++ {
		// If prime[p] is not changed, then it is a prime
		if prime[p] {
			// Update all multiples of p greater than or
			// equal to the square of it numbers which are
			// multiple of p and are less than p^2 are
			// already been marked.
			for i := p * p; i <= n; i += p {
				prime[i] = false
			}
		}
	}

	// Prall :prime numbers
	for p := 2; p <= n; p++ {
		if prime[p] {
			fmt.Printf("%d ", p)
		}
	}
}

func print_primes_before_optimized(n int) {
	prime := make([]bool, n+1)
	for i := 2; i <= n; i++ {
		prime[i] = true
	}
	for p := 2; p <= n; p++ {
		if prime[p] {
			fmt.Printf("%d ", p)

			for i := p * p; i <= n; i += p {
				prime[i] = false
			}
		}
	}
}

func main() {
	n1 := 63
	n2 := 6120931
	print_primes_before(n1)
	fmt.Printf("\n")
	print_primes_before_optimized(n2)
	fmt.Printf("\n")
}
