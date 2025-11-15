// 2025 Kristoffer

#include <stdio.h>
#include <string.h>

int main() {
  int length;
  int nums[100];
  int i;

  while (scanf("%d", &length) == 1) {
    for (i = 0; i < length; ++i) {
      scanf("%d", &nums[i]);
    }
    printf("%d elements:", length);
    for (i = 0; i < length; ++i) {
      printf(" %d", nums[i]);
    }
    puts("");
  }
}
