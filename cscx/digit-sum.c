// 2025 Kristoffer

#include <stdio.h>

int digit_sum(int x) ;

int main() {
  int input = 0 ;
  while ((scanf("%d", &input) != EOF)) {
    printf("%d\n", digit_sum(input)) ;
  }
}

int digit_sum(int x) {
  if (x == 0) {
    return 0 ;
  }
  return x % 10 + digit_sum(x / 10) ;
}
