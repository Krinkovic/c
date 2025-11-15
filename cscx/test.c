
#include <stdio.h>

int power(int b, int n);

int main() {
  int b = 5;
  int n = 3;
  printf("%d\n", power(b, n));
}

int power(int b, int n) {
  int result = 1;
  for (int i = n; i > 2; --i) {
    result *= b;
  }
  return b;
}
