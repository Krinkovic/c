// 2025 Kristoffer

#include <stdio.h>
#include <string.h>

int main() {
  char p[30],op[30], q[30];
  while (scanf("%s %s %s", p, op, q) == 3) {
    if (strcmp(op, "and") == 0) {
      if (strcmp(p, "true") == 0 && strcmp(q, "true") == 0) {
        printf("true\n");
      }
      else {
        printf("false\n");
      }
    }
    else {
      if (strcmp(p, "true") == 0 || strcmp(q, "true") == 0) {
        printf("true\n");
      }
      else printf("false\n");
    }
  }
}
