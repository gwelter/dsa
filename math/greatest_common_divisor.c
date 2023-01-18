#include <stdio.h>

int min(int a, int b) {
  if (a <= b) {
    return a;
  }
  return b;
}

// Time complecity Θ(min(a,b))
// Auxiliar space complexity Θ(1)
int gcd_naive(int a, int b) {
  if (a == b) {
    return a;
  }
  int res = min(a, b);
  while (res > 0) {
    if (a % res == 0 && b % res == 0) {
      break;
    }
    res--;
  }
  return res;
}

// Time complecity Θ(min(a,b))
// Auxiliar space complexity Θ(min(a,b))
int gcd(int a, int b) {
  if (a == b) {
    return a;
  } else if (a > b) {
    return gcd(a - b, b);
  } else {
    return gcd(a, b - a);
  }
}

// Time complecity Θ(log(min(a,b)))
// Auxiliar space complexity Θ(log(min(a,b)))
int gcd_improved(int a, int b) {
  if (b == 0) {
    return a;
  }
  return gcd_improved(b, a % b);
}

int main() {
  int a = 12;
  int b = 28;

  printf("Common divisor beteeen %d and %d is %d\n", a, b, gcd_naive(a, b));
  printf("Common divisor beteeen %d and %d is %d\n", a, b, gcd(a, b));
  printf("Common divisor beteeen %d and %d is %d\n", a, b, gcd_improved(a, b));
}
