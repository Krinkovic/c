// 2025 Kristoffer

#include <stdio.h>
#include <string.h>

int main() {
  char boolean[30];
  while (scanf("%s", boolean) == 1) {
    if (strcmp(boolean, "true") == 0) {
      printf("false\n");
    }
    else {
      printf("true\n");
    }
  }
}
