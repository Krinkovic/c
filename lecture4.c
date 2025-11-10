#include <stdio.h>
#include <stdlib.h>

void format();
void incr();

int main() {
  incr();
}

void format() {
  printf("%s %s\n", "Element", "Value");
  int count = 0;
  for (int i = 0; i <= 5; ++i) {
    printf("%7d %5d\n", rand() % 6 + 1, rand() % 6 + 1);
  }
  printf("%s %s\n", "Element", "Value");
  int i = 0;
  for (int i = 0; i <= 5; ++i) {
    printf("%7d %5d\n", rand() % 6 + 1, rand() % 6 + 1);
  }
}

void incr() {
  int x = 8;
  int y = 0;
  int z = 0;
  printf("x = %d\n", x);
  printf("%.2e\n", 1.345);

  y = x++;
  printf("x = %d\n", x);
  z = ++x;

  printf("x = %d\ny = %d\nz = %d\n", x, y, z);
  }
