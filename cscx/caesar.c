// 2025 Kristoffer

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void encrypt(int key, char *input, size_t length);

int main(int argc, char *argv[])
{
  int key = 13;
  char input[100];
  if (argc > 1) {
    key = atoi(argv[1]);
  }
  while (fgets(input, sizeof(input), stdin) != NULL) {
    size_t length = strlen(input);
    encrypt(key, input, length);
    printf("%s", input);
  }
}

void encrypt(int key, char *input, size_t length) {
  for (int i = 0; i < length; ++i) {
    char c = input[i];
    if (c >= 'a' && c <= 'z') {
      input[i] = (c - 'a' + 26 + key) % 26 + 'a';
    } else if (c >= 'A' && c <= 'Z') {
      input[i] = (c - 'A' + 26 + key) % 26 + 'A';
    }
  }
}
