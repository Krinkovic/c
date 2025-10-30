// 2025 Kristoffer

#include <stdio.h>

int main() {
  int num = 0;
  scanf("%d", &num);
  if (num > 0) {
    printf("%s", "positive\n");
  }
  else if (num < 0) {
    printf("%s", "negative\n");
  }
  else {
    printf("%s", "zero\n");
  }
}
