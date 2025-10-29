// 2025 Kristoffer

#include <stdio.h>

int triple(int x) {
  return x + x + x;
}

int main() {
  int input = 0;
  scanf("%d", &input);
  printf("%d\n", triple(input));
  return 0;
}
