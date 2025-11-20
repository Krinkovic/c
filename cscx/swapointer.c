// 2025 Kristoffer

#include <stdio.h>

void swap(int *px, int *py);

int main() {
  int x, y;
  int *px = &x;
  int *py = &y;
  while (scanf("%d %d", &x, &y) == 2) {
    swap(px, py);
    printf("%d %d\n", x, y);
  }
}

void swap(int *px, int *py) {
  int temp = *px;
  *px = *py;
  *py = temp;
}
