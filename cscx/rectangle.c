// 2025 Kristoffer

#include <stdio.h>

struct rectangle {
  int width;
  int height;
};
typedef struct rectangle rect_t;

int area(rect_t rect);
int perimeter(rect_t rect);

int main() {
  rect_t rectangle;
  while (scanf("%d %d", &rectangle.height, &rectangle.width) == 2) {
    printf("%dx%d rectangle, area = %d, perimeter = %d\n", rectangle.height, rectangle.width, area(rectangle), perimeter(rectangle));
  }
}

int area(rect_t rect) {
  return rect.height * rect.width;
}
int perimeter(rect_t rect) {
  return 2 * (rect.height + rect.width);
}
