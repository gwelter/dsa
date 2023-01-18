#include <stdio.h>

// Time complecity Θ(n)
// Auxiliar space complexity Θ(n)
int factorial_recursive(int n) {
  if (n <= 1)
    return 1;
  return n * factorial_recursive(n - 1);
}

// Time complecity Θ(n)
// Auxiliar space complexity Θ(1)
int factorial_loop(int n) {
  int result = 1;
  for (int i = n; i > 1; i--) {
    result *= i;
  }

  return result;
}

int main() {
  printf("Factorial of 1 is %d\n", factorial_loop(1));
  return 0;
}