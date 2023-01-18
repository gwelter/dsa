package main

import "fmt"

func reverseNumber(n int) int {
	reverse := 0
	for n != 0 {
		lastDigit := n % 10
		reverse = reverse*10 + lastDigit
		n = n / 10
	}

	return reverse
}

func main() {
	n1 := 345
	n2 := 606
	n3 := 5

	n1Reverse := reverseNumber(n1)
	n2Reverse := reverseNumber(n2)
	n3Reverse := reverseNumber(n3)

	fmt.Printf("Reverse of %d is %d, are they palindrome? %t\n", n1, n1Reverse,
		n1 == n1Reverse)
	fmt.Printf("Reverse of %d is %d, are they palindrome? %t\n", n2, n2Reverse,
		n2 == n2Reverse)
	fmt.Printf("Reverse of %d is %d, are they palindrome? %t\n", n3, n3Reverse,
		n3 == n3Reverse)
}
