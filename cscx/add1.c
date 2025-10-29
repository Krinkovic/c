// 2025 Kristoffer

#include <stdio.h>

int add(int x, int y)
{
  return x + y;
}

int main()
{
  int x, y = 0;
  scanf("%d %d", &x, &y);
  printf("%d\n", add(x, y));
  return 0;
}
