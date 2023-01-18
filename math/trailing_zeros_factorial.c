#include <stdio.h>

// Time complecity Θ(log5n)
// Auxiliar space complexity Θ(1)
int countZeros(int n) {
  if (n < 0) // Negative Number Edge Case
    return -1;

  int count = 0;
  /**
   * n/5 + n/25 + n/125 ... n/5^k while 5ˆk is less than n
   */
  for (int i = 5; i <= n; i = i * 5) {
    count += n / i;
  }
  return count;
}

int main() {
  printf("Factorial of 20 has %d zeros\n", countZeros(20));
  return 0;
}