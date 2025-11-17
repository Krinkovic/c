// 2025 Kristoffer

#include <stdio.h>
int add(int x, int y) ;

int main () {
  int x, y;
  while ((scanf("%d %d", &x, &y) != EOF)) {
    printf("%d\n", add(x, y)) ;
  }
}

int add(int x, int y) {
  return x + y ;
}
