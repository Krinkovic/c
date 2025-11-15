// 2025 Kristoffer

#include <stdio.h>

int factorial(int n);

int main() {
  int n;
  while(scanf("%d", &n) == 1) {
    printf("%d\n", factorial(n));
  }
}

int factorial(int n) {
  if (n == 0) {
    return 1;
  }
  else {
    return n * factorial(n - 1);
  }

}
