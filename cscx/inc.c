// 2025 Kristoffer

#include <stdio.h>

int inc(int x);

int main() {
  int x;
  while (scanf("%d", &x) == 1) {
    printf("%d\n", inc(x));
  }
}

int inc(int x) {
  return ++x;
}
