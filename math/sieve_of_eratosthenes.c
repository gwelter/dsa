#include <stdio.h>

void print_primes_before(int n) {
  int prime[n + 1];
  for (int i = 2; i <= n; i++) {
    prime[i] = 1;
  }
  for (int p = 2; p * p <= n; p++) {
    // If prime[p] is not changed, then it is a prime
    if (prime[p] == 1) {
      // Update all multiples of p greater than or
      // equal to the square of it numbers which are
      // multiple of p and are less than p^2 are
      // already been marked.
      for (int i = p * p; i <= n; i += p)
        prime[i] = 0;
    }
  }

  // Print all prime numbers
  for (int p = 2; p <= n; p++)
    if (prime[p])
      printf("%d ", p);
}

void print_primes_before_optimized(int n) {
  int prime[n + 1];
  for (int i = 2; i <= n; i++) {
    prime[i] = 1;
  }

  for (int i = 2; i <= n; i++) {
    if (prime[i]) {
      printf("%d ", i);

      for (int j = i * i; j <= n; j = j + i)
        prime[j] = 0;
    }
  }
}

int main() {
  int n1 = 63;
  int n2 = 20998;
  print_primes_before(n1);
  printf("\n");
  print_primes_before_optimized(n2);
  printf("\n");
  return 0;
}