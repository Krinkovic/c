// 2025 Kristoffer

#include <stdio.h>

int mult(int x, int y, int z);

int main() {
  int x, y, z;
  while (scanf("%d %d %d", &x, &y, &z) == 3) {
    printf("%d\n", mult(x, y, z));
  }
}

int mult(int x, int y, int z) {
  return x * y * z;
}
