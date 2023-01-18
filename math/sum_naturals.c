#include <stdio.h>

int sum_naturals(int n) { return n * (n + 1) / 2; }

int main() {
  int n = 5;
  printf("Sum of naturals until %d is %d\n", n, sum_naturals(n));
  return 0;
}