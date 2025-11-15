// 2025 Kristoffer

#include <stdio.h>

long long factorial(int n);
int catalan(int n);

int main() {
  int n;
  while (scanf("%d", &n) == 1) {
    printf("%d\n", catalan(n));
  }
}

int catalan(int n) {
  long result = 1;
  for (int i = 0; i < n; ++i) {
        result = result * (2 * n - i);
        result = result / (i + 1);
  }
  return result / (n + 1);
}
