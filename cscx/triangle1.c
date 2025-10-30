// 2025 Kristoffer

#include <stdio.h>

int main() {
	int x, y, z = 0;
	scanf("%d %d %d", &x, &y, &z);

  if (x > y + z || y > z + x || z > x + y) {
    printf("%s", "impossible\n");
  }
  else if (x == y && y == z) {
    printf("%s", "equilateral\n");
  }
  else if (x == y || y == z || z == x) {
    printf("%s", "isosceles\n");
  }
  else {
    printf("%s", "scalene\n");
  }
}
