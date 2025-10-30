// 2025 Kristoffer

#include <stdio.h>

int factorial(int n);

int main() {
  int input = 0;
  scanf("%d", &input);
  printf("%d\n", factorial(input));
}

int factorial(int n) {
  if (n == 0) {
    return 1;
  }
  else {
    return n * factorial(n - 1);
  }
}
