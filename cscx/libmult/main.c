// 2025 Kristoffer

#include <stdio.h>
#include "libmult.h"

int main() {
  int n;
  scanf("%d", &n);
  printf("triple(%d) = %d\n", n, triple(n));
  printf("quadruple(%d) = %d\n", n, quadruple(n));
  printf("quintuple(%d) = %d\n", n, quintuple(n));
  printf("sixtuple(%d) = %d\n", n, sixtuple(n));
  printf("septuple(%d) = %d\n", n, septuple(n));
}
