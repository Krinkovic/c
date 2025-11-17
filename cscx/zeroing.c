// 2025 Kristoffer

#include <stdio.h>

void zero_int(int *px);

int main() {
  int n;
  while (scanf("%d", &n) == 1) {
    printf("Before zeroing: %d\n", n);
    zero_int(&n);
    printf("After zeroing: %d\n", n);
      }
}

void zero_int(int *px) {
  *px = 0;
}
