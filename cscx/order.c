// 2025 Kristoffer

#include <stdio.h>

int main() {
  int a, b = 0 ;
  while ((scanf("%d %d", &a, &b) != EOF)) {
    if (a < b) {
      printf("%s\n", "Yes") ;
    }
    else {
      printf("%s\n", "No") ;
    }
  }
}
