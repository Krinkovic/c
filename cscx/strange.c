// 2025 Kristoffer

#include <stdio.h>
#include <stdlib.h>

char *strange(char s, char e);

int main() {
  char start, end;
  while (scanf(" %c %c", &start, &end) == 2) {
    printf("'%c' '%c'\n", start, end);
    char *charseq = strange(start, end);
    printf("%s\n", charseq);
    free(charseq);
  }
}

char *strange(char s, char e) {
  size_t size = e - s + 1;
  printf("size: %zu\n", size);
  char *str = malloc(size);
  for (int i = 0; i < size; ++i) {
    str[i] = s + i;
  }
  str[size] = '\0';
  return str;
}
