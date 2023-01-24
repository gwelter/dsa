#include <stdio.h>

int power_naive(int n, int p) {
  if (p == 0)
    return 1;
  if (p == 1)
    return n;

  int pow = n;
  for (int i = 2; i <= p; i++) {
    pow = pow * n;
  }
  return pow;
}

int power_recursive(int n, int p) {
  if (p == 0)
    return 1;
  if (p == 1)
    return n;

  int pow = power_recursive(n, p / 2);
  pow = pow * pow;
  if ((p & 1) == 0) {
    return pow;
  } else {
    return pow * n;
  }
}

int power_linear(int n, int p) {
  int result = 1;
  while (p > 0) {
    if (p & 1) {
      result *= n;
    }
    p = p >> 1;
    n *= n;
  }
  return result;
}

int main() {
  int n1 = 6;
  int n2 = 2;
  int n3 = 2;
  printf("%d power of %d is %d\n", n1, 3, power_naive(n1, 3));
  printf("%d power of %d is %d\n", n2, 8, power_recursive(n2, 8));
  printf("%d power of %d is %d\n", n3, 3, power_linear(n3, 3));
  return 0;
}