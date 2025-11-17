// 2025 Kristoffer

#include <stdio.h>

int mult(int x, int y, int z)
{
  return x * y * z;
}

int main()
{
  int x, y, z;
  scanf("%d %d %d", &x, &y, &z);
  printf("%d\n", mult(x, y, z));
  return 0;
}
