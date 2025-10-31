// 2025 Kristoffer

#include <stdio.h>

int total(int n) ;

int main() {
  int n = 0 ;
  scanf("%d", &n) ;
  printf("%d\n", total(n)) ;
}

int total(int n) {
  int sum, x = 0 ;
  for (int i = n; n > 0; --n) {
    scanf("%d", &x) ;
    sum += x ;
  }
  return sum ;
}
