
#include <stdio.h>


int main() {
  int args, a, b, c;
  while ((args = scanf("%d %d %d", &a, &b, &c)) != EOF) {
    if (args == 2) {
      return a + b;
    }
    else {
      return a + b + c;
    }
  }
}
