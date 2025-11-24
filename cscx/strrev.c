// 2025 Kristoffer

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *strreverse(const char *s);

int main() {
  char str[60 + 1];
  while (scanf("%s", str) == 1) {
    char *strReverse = strreverse(str);
    printf("The reverse of \"%s\" is \"%s\".\n",str, strReverse);
    free(strReverse);
  }

}

char *strreverse(const char *s) {
  size_t len = strlen(s);
  char *buf = malloc(len + 1);
  size_t i;
  for (i = 0; i < len; ++i) {
    buf[i] = s[len - 1 - i];
  }
  buf[len] = '\0';
  return buf;
}
