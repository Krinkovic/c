// 2025 Kristoffer

#include <stdio.h>

int gcd(int x, int y);

int main() {
  int x, y;
  while (scanf(" %d %d", &x, &y) == 2) {
    printf("%d\n", gcd(x, y));
  }
}

int gcd(int x, int y) {
  while (1) {
    if (x == 0) {
      return y;
    }
    if (y == 0) {
      return x;
    }

    if (x >= y) {
      x %= y;
    } else {
      y %= x;
    }

    if (x == 1) {
      return x;
    }
    if (y == 1) {
      return y;
    }
  }
  return -1;
}
