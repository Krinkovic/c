
#include <stdio.h>
int main(void)
{
  // ++ before x
  // y becomes 5 + 1 = 6, x becomes 5 + 1 = 6
  int x = 5;
  int y = ++x;
  printf("x = %d, y = %d\n", x, y);

  // ++ after x
  // z becomes x = 5, x becomes 5 + 1 = 6
  x = 5;
  int z = x++;
  printf("x = %d, z = %d\n", x, z);

  printf("%d\n", 7 / 5);
  printf("%.1f\n", 7.0 / 5.0);
  printf("%s\n", "Heso Peso");
}
