// 2025 Kristoffer

#include <stdio.h>

int sort(int x, int y, int z) ;

int main() {
	int x, y, z, c = 0;
	while((scanf("%d %d %d", &x, &y, &z) != EOF)) {
  	if (y > x) {
	    c = x ;
	    x = y ;
	    y = c ;
  	}
  	if (z > x) {
	    c = x ;
	    x = z ;
	    z = c ;
  	}

    if (x > y + z || y > z + x || z > x + y) {
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
