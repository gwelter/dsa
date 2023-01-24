package main

import "fmt"

func power_naive(n, p int) int {
	if p == 0 {
		return 1
	}
	if p == 1 {
		return n
	}

	pow := n
	for i := 2; i <= p; i++ {
		pow = pow * n
	}
	return pow
}

func power_recursive(n, p int) int {
	if p == 0 {
		return 1
	}
	if p == 1 {
		return n
	}

	pow := power_recursive(n, p/2)
	pow = pow * pow
	if p%2 == 0 {
		return pow
	} else {
		return pow * n
	}
}

func power_linear(n, p int) int {
	result := 1
	for p > 0 {
		if p%2 != 0 {
			result *= n
		}
		p = p >> 1
		n *= n
	}
	return result
}

func main() {
	n1 := 6
	n2 := 3
	n3 := 2
	fmt.Printf("%d power of %d is %d\n", n1, 3, power_naive(n1, 3))
	fmt.Printf("%d power of %d is %d\n", n2, 8, power_recursive(n2, 8))
	fmt.Printf("%d power of %d is %d\n", n3, 3, power_recursive(n3, 3))
}
