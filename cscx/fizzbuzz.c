// 2025 Kristoffer

#include <stdio.h>
#include <string.h>

int main() {
  int n;
  while (scanf("%d", &n) == 1){
    for (int i = 1; i <= n; ++i) {
      char result[10] = "";
      if (i % 3 == 0) {
        strcat(result, "Fizz");
      }
      if (i % 5 == 0) {
        strcat(result, "Buzz");
      }
      if (strcmp(result, "") == 0) {
        printf("%d\n", i);
      }
      else {
        printf("%s\n", result);
      }
    }
  }
}
