#include <stdio.h>

int countDigits(long long n) {
  if (0 == n) {
    return 1;
  }
  int digits = 0;
  while (0 != n) {
    n = n / 10;
    digits++;
  }
  return digits;
}

int main() {
  long long n = 123123;
  printf("%lld has %d digits\n", n, countDigits(n));
  return 0;
}