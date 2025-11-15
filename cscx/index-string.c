// 2025 Kristoffer

#include <stdio.h>

int main() {
  char input[61];
  int i;
  while (scanf("%60s %d", input, &i) == 2) {
    printf("%c\n", input[i]);
  }
}
