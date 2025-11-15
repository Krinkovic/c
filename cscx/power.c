// 2025 Kristoffer

#include <stdio.h>

int power(int b, int n);

int main() {
  int b, n;
  while (scanf("%d %d", &b, &n) == 2) {
    printf("%d\n", power(b, n));
  }
}

int power(int b, int n) {
  int result = 1;
  for (int i = n; i > 0; --i) {
    result *= b;
  }
  return result;
}
