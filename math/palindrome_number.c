#include <stdio.h>

int reverseNumber(int n) {
  int reverse = 0;
  while (n != 0) {
    int lastDigit = n % 10;
    reverse = reverse * 10 + lastDigit;
    // To lower the number and decrease its digits
    n = n / 10;
  }

  return reverse;
}

int main() {
  int n1 = 345;
  int n2 = 606;

  int n1Reverse = reverseNumber(n1);
  int n2Reverse = reverseNumber(n2);

  printf("Reverse of %d is %d, are they palindrome? %d\n", n1, n1Reverse,
         n1 == n1Reverse);
  printf("Reverse of %d is %d, are they palindrome? %d\n", n2, n2Reverse,
         n2 == n2Reverse);

  return 0;
}