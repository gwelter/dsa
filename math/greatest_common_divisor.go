package main

import "fmt"

func min(a, b int) int {
	if a <= b {
		return a
	}
	return b
}

// Time complecity Θ(min(a,b))
// Auxiliar space complexity Θ(1)
func gcd_naive(a, b int) int {
	if a == b {
		return a
	}
	res := min(a, b)
	for res > 0 {
		if a%res == 0 && b%res == 0 {
			break
		}
		res--
	}
	return res
}

// Time complecity Θ(min(a,b))
// Auxiliar space complexity Θ(min(a,b))
func gcd(a, b int) int {
	if a == b {
		return a
	} else if a > b {
		return gcd(a-b, b)
	} else {
		return gcd(a, b-a)
	}
}

// Time complecity Θ(log(min(a,b)))
// Auxiliar space complexity Θ(log(min(a,b)))
func gcd_improved(a, b int) int {
	if b == 0 {
		return a
	}
	return gcd_improved(b, a%b)
}

func main() {
	a := 12
	b := 28

	fmt.Println("Common divisor beteeen", a, b, "is", gcd_naive(a, b))
	fmt.Println("Common divisor beteeen", a, b, "is", gcd(a, b))
	fmt.Println("Common divisor beteeen", a, b, "is", gcd_improved(a, b))
}
