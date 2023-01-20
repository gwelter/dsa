#include <stdio.h>

int prime_naive(int n) {
  if (n <= 1)
    return 0;

  for (int i = 2; i < n; i++) {
    if (n % i == 0)
      return 0;
  }

  return 1;
}

int prime_sqr_n(int n) {
  if (n <= 1)
    return 0;

  for (int i = 2; i * i <= n; i++) {
    if (n % i == 0)
      return 0;
  }

  return 1;
}

int prime_optimized(int n) {
  if (n <= 1)
    return 0;

  if (n == 2 || n == 3)
    return 1;

  if (n % 2 == 0 || n % 3 == 0)
    return 0;

  for (int i = 5; i * i <= n; i += 6) {
    if (n % i == 0 || n % (i + 2) == 0)
      return 0;
  }

  return 1;
}

int main() {
  int n1 = 6;
  int n2 = 7;
  int n3 = 999999937;
  printf("Is %d prime (naive)? %d\n", n1, prime_naive(n1));
  printf("Is %d prime (square root of n)? %d\n", n1, prime_sqr_n(n1));
  printf("Is %d prime (square root of n)? %d\n", n1, prime_optimized(n1));
  printf("Is %d prime (naive)? %d\n", n2, prime_naive(n2));
  printf("Is %d prime (square root of n)? %d\n", n2, prime_sqr_n(n2));
  printf("Is %d prime (square root of n)? %d\n", n2, prime_optimized(n2));
  printf("Is %d prime (naive)? %d\n", n3, prime_naive(n3));
  printf("Is %d prime (square root of n)? %d\n", n3, prime_sqr_n(n3));
  printf("Is %d prime (square root of n)? %d\n", n3, prime_optimized(n3));
  return 0;
}