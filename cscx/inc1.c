// 2025 Kristoffer

#include <stdio.h>

int inc(int x)
{
  return x + 1;
}

int main()
{
  int input = 0;
  scanf("%d", &input);
  printf("%d\n", inc(input));
  return 0;
}
