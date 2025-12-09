// 2025 Kristoffer

#include <stdio.h>

void bank(int notes[], size_t size, int x);

int main() {
  int banknotes[] = {100, 50, 20, 10, 5, 2, 1};
  size_t length = sizeof(banknotes) / sizeof(int);
  int x;
  while (scanf("%d", &x) == 1) {
    bank(banknotes, length, x);
  }
}

void bank(int notes[],size_t length, int x) {
  for (size_t i = 0; i < length; ++i){
    int n = x / notes[i];
    x %= notes[i];
    if (n > 0) {
      printf("%dx%d%s", n, notes[i], (x > 0 ? " ": "\n"));
    }
  }
}
