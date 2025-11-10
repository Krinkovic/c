// 2025 Kristoffer

#include <stdio.h>
#include <string.h>

int main() {
  char job[30];
  int age;
  while (scanf("%s %d", job, &age) == 2) {
    if (age < 18 || age >= 65 || strcmp(job, "student") == 0 && age <= 25) {
      printf("discount\n");
    }
    else {
      printf("full price\n");
    }
  }
}
