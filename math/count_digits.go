package main

import "fmt"
import "C"

func countDigits(n int) int {
	if n == 0 {
		return 1
	}
	digits := 0
	for n != 0 {
		n = n / 10
		digits++
	}
	return digits
}

func math() {
	fmt.Println(countDigits(123123))
}
