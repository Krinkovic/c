// 2025 Kristoffer

#include <stdio.h>
#include <string.h>

int main() {
  char input[100];
  while (scanf("%99s", input) == 1) {
    int length = strlen(input);
    char deduped[100] = "";
    deduped[0] = input[0];
    for (int i = 1; i <= length; ++i) {
      if (input[i] == input[i - 1]) {
        continue;
      }
      else {
        deduped[strlen(deduped)] = input[i];
      }
    }
    printf("%s\n", deduped);
  }
}
