// 2025 Kristoffer

#include <stdio.h>

int main() {
  char name[30];
  int age;
  while (scanf("%s %d", name, &age) == 2) {
    printf("%s is %d years old.\n", name, age);
  }
}
