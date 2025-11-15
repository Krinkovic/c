// 2025 Kristoffer

#include <stdio.h>

int main() {
  char input[61], replace;
  int i;

  while (scanf("%60s %d %c", input, &i, &replace) == 3) {
    input[i] = replace;
    printf("%s\n", input);
  }
}
