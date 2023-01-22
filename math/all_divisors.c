#include <stdio.h>

void all_divisors_naive(int n) {
  for (int i = 1; i <= n; i++) {
    if (n % i == 0) {
      printf("%d ", i);
    }
  }
  printf("\n");
}

void all_divisors_in_pair(int n) {
  for (int i = 1; i * i <= n; i++) {
    if (n % i == 0) {
      if (n / i == i) {
        printf("%d; ", i);
      } else {
        printf("%d * %d; ", i, n / i);
      }
    }
  }
  printf("\n");
}

void all_divisors_in_order(int n) {
  int i = 1;
  for (; i * i < n; i++) {
    if (n % i == 0) {
      printf("%d ", i);
    }
  }
  for (; i >= 1; i--) {
    if (n % i == 0) {
      printf("%d ", n / i);
    }
  }
  printf("\n");
}

int main() {
  int n1 = 25;
  int n2 = 1000;
  int n3 = 945;
  printf("All divisors of %d: ", n1);
  all_divisors_naive(n1);
  printf("All divisors of %d: ", n2);
  all_divisors_in_pair(n2);
  printf("All divisors of %d: ", n3);
  all_divisors_in_order(n3);
  return 0;
}