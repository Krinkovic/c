// 2025 Kristoffer

#include <stdio.h>

int main() {
  double debt;
  char name1[30], name2[30];
  while (scanf("%lf %s %s", &debt, name1, name2) == 3) {
    printf("%s owes $%.2f dollars to %s.\n", name1, debt, name2);
  }
}
