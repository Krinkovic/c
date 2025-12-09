// 2025 Kristoffer

#include <stdio.h>

int reverse_digits(int x);

int main() {
  int x;
  while (scanf(" %d", &x) == 1) {
    printf("%d\n", reverse_digits(x));
  }
}

int reverse_digits(int x) {
  int reversed = 0;
  int d = 0;
  while (x > 0) {
    d = x % 10;
    x = x / 10;
    reversed = reversed * 10 + d;
  }
  return reversed;
}
