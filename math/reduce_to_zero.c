#include <stdio.h>

int steps_to_zero(int n) {
  int steps = 0;
  while (n > 0) {
    if (n % 2 == 0) {
      n = n / 2;
    } else {
      n--;
    }
    steps++;
  }
  return steps;
}

int main() {
  int n1 = 8;
  int n2 = 14;
  printf("Steps to reduce %d to 0: %d\n", n1, steps_to_zero(n1));
  printf("Steps to reduce %d to 0: %d\n", n2, steps_to_zero(n2));
  return 0;
}