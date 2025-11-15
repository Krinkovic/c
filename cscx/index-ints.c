// 2025 Kristoffer

#include <stdio.h>

int main() {
  int nums [100], length, i, j;
  while (scanf("%d", &length) == 1) {
    for (i = 0; i < length; ++i) {
      scanf("%d", &nums[i]);
    }
    scanf("%d", &j);
    printf("%d\n", nums[j]);
  }
}
