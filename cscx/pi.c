// 2025 Kristoffer

#include <stdio.h>
#include <math.h>

double circumference(double r);
double area(double r);

int main() {
  double r = 0;
  while (scanf("%lf", &r) == 1) {
    printf("%.2f %.2f\n", circumference(r), area(r));
  }
}

double circumference(double r) {
  return 2 * M_PI * r;
}

double area(double r) {
  return M_PI * r * r;
}
