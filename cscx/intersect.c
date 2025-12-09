// 2025 Kristoffer

#include <stdio.h>
#include <stdlib.h>

typedef struct rectangle {
  int x1;
  int y1;
  int x2;
  int y2;
} rectangle;

char *intersect(rectangle rect1, rectangle rect2);

int main() {
  rectangle rect1;
  rectangle rect2;
  while (scanf(" %d %d %d %d %d %d %d %d",
               &rect1.x1, &rect1.y1, &rect1.x2, &rect1.y2,
               &rect2.x1, &rect2.y1, &rect2.x2, &rect2.y2) == 8) {
    char *response = intersect(rect1, rect2);
    printf("%s\n", response);
  }
}

char *intersect(rectangle rect1, rectangle rect2) {
  if (rect1.x1 > rect2.x2 || rect1.x2 < rect2.x1 || rect1.y1 > rect2.y2 || rect1.y2 < rect2.y1) {
    return "no";
  }
  else {
    return "yes";
  }
}
