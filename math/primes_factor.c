#include <stdio.h>

void prime_factor(int n) {
  if (n <= 1)
    return;

  for (int i = 2; i * i <= n; i++) {
    while (n % i == 0) {
      printf("%d ", i);
      n = n / i;
    }
  }
  if (n > 1) {
    printf("%d", n);
  }
}

void prime_factor_optimized(int n) {
  if (n <= 1)
    return;

  while (n % 2 == 0) {
    printf("%d ", 2);
    n = n / 2;
  }
  while (n % 3 == 0) {
    printf("%d ", 3);
    n = n / 3;
  }

  for (int i = 5; i * i <= n; i += 6) {
    while (n % i == 0) {
      printf("%d ", i);
      n = n / i;
    }
    while (n % i + 2 == 0) {
      printf("%d ", i + 2);
      n = n / i + 2;
    }
  }

  if (n > 1) {
    printf("%d", n);
  }
}

int main() {
  int n1 = 6;
  int n2 = 450;
  int n3 = 7;
  int n4 = 999999937;
  prime_factor_optimized(n1);
  printf("\n");
  prime_factor_optimized(n2);
  printf("\n");
  prime_factor_optimized(n3);
  printf("\n");
  prime_factor_optimized(n4);
  printf("\n");
  return 0;
}