// 2025 Kristoffer

#include <stdio.h>

int power(int b, int n);

int main() {
  int base, exp;
  scanf("%d %d", &base, &exp);
  printf("%d\n", power(base, exp));
}

int power(int b, int n) {
  if (n == 0) {
    return 1;
  }
  else {
    return b * power(b, (n - 1));
  }
}
