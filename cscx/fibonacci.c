// 2025 Kristoffer

#include <stdio.h>

int fibonacci(int n);

int main() {
  int n;
  while (scanf("%d", &n) == 1) {
    printf("%d\n", fibonacci(n));
  }
}

int fibonacci(int n) {
  if (n == 0) {
    return 0;
  }
  else if (n == 1) {
    return 1;
  }
  else {
    int prevprev = 0;
    int prev = 1;
    int result = 0;
    for (int i = 2; i <= n; ++i) {
      result = prev + prevprev;
      prevprev = prev;
      prev = result;
    }
    return result;
  }
}



/*
0 - 0
1 - 1
2 - 1
3 - 2
4 - 3
5 - 5
6 - 8
7 - 13
8 - 21


*/
