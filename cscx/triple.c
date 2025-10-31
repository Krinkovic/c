// 2025 Kristoffer

#include <stdio.h>

int triple(int x) ;

int main() {
  int input = 0 ;
  while ((scanf("%d", &input) != EOF)) {
    printf("%d\n", triple(input)) ;
  }
}

int triple(int x) {
  return 3 * x ;
}
