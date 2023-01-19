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

// Time Complexity: O(log(min(a,b))
// Auxiliary Space: O(log(min(a,b))
int least_common_multiple(int a, int b) { return a * b / gcd_improved(a, b); }

int main() {
  int a = 15;
  int b = 20;

  printf("Greatest common divisor beteeen %d and %d is %d\n", a, b,
         gcd_naive(a, b));
  printf("Greatest common divisor beteeen %d and %d is %d\n", a, b, gcd(a, b));
  printf("Greatest common divisor beteeen %d and %d is %d\n", a, b,
         gcd_improved(a, b));

  printf("Least common multiple beteeen %d and %d is %d\n", a, b,
         least_common_multiple(a, b));
}
