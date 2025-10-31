// 2025 Kristoffer

#include <stdio.h>

int main() {
  int input = 0 ;
  while ((scanf("%d", &input) != EOF)) {
    if (input % 2 == 0) {
      printf("%s\n", "even") ;
    }
    else {
      printf("%s\n", "odd") ;
    }
  }
}
