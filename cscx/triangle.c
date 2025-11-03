// 2025 Kristoffer

#include <stdio.h>

int main() {
	int x, y, z, temp = 0;
	while((scanf("%d %d %d", &x, &y, &z) != EOF)) {
  	if (y > x) {
	    temp = x ;
	    x = y ;
	    y = temp ;
  	}
  	if (z > x) {
	    temp = x ;
	    x = z ;
	    z = temp ;
  	}

    if (x > y + z) {
      printf("%s", "impossible\n");
      continue ;
    }
    else if (x == y && y == z) {
      printf("%s", "equilateral ");
    }
    else if (x == y || y == z || z == x) {
      printf("%s", "isosceles ");
    }
    else {
      printf("%s", "scalene ");
    }

    if (x * x > y * y + z * z) {
      printf("%s", "obtuse\n");
    }
    else if (x * x < y * y + z * z) {
      printf("%s", "acute\n");
    }
    else {
      printf("%s", "right\n");
    }
  }
}
