// 2025 Kristoffer

#include <stdio.h>

int digit_count(int d, int x);

int main() {
  int d, x;
  while (scanf(" %d %d", &d, &x) == 2) {
    printf("%d\n", digit_count(d, x));
  }
}

int digit_count(int d, int x) {
  int count = 0;
  int lastd;
  while (x != 0) {
    lastd = x % 10;
    x = x / 10;
    if (lastd == d) {
      count += 1;
    }
  }
  return count;
}
