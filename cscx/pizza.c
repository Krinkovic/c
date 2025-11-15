// 2025 Kristoffer

#include <stdio.h>

int main() {
  int n;
  while (scanf("%d", &n) == 1) {
    int result = 1;
    for (int i = 1; i <= n; ++i) {
      result += i;
    }
    printf("%d\n", result);
  }
}
