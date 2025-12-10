// 2025 Kristoffer

#include <stdio.h>

char crypt(char c);

int main() {
  char c;
  while((c = getchar()) != EOF) {
    printf("%c", crypt(c));
  }
}

char crypt(char c) {
  if (c >= 'a' && c <= 'z') {
    c = (c - 'a' + 13) % 26 + 'a';
  } else if (c >= 'A' && c<= 'Z') {
    c = (c - 'A' + 13) % 26 + 'A';
  }
  return c;
}
