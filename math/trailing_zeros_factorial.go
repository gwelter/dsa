package main

import "fmt"

func countZeros(n int) int {
	if n < 0 { // Negative Number Edge Case
		return -1
	}

	count := 0
	/**
	 * n/5 + n/25 + n/125 ... n/5^k while 5ˆk is less than n
	 */
	for i := 5; i <= n; i *= 5 {
		count += n / i
	}
	return count
}

func main() {
	fmt.Printf("Factorial of 20 has %d zeros\n", countZeros(20))
}
