// 2025 Kristoffer

#include <stdio.h>
#include <math.h>

double add(double x, double y);
double subtract(double x, double y);
double multiply(double x, double y);
double divide(double x, double y);
double power(double x, double y);

int main() {
  double x, y;
  char operator;
  while(scanf("%lf %c %lf", &x, &operator, &y) == 3) {
    switch (operator) {
      case '+':
        printf("%.2f\n", add(x, y));
        break;
      case '-':
        printf("%.2f\n", subtract(x, y));
        break;
      case '*':
        printf("%.2f\n", multiply(x, y));
        break;
      case '/':
        printf("%.2f\n", divide(x, y));
        break;
      case '^':
        printf("%.2f\n", power(x, y));
        break;
    }
  }
}

double add(double x, double y) {
  return x + y;
}

double subtract(double x, double y) {
  return x - y;
}

double multiply(double x, double y) {
  return x * y;
}

double divide(double x, double y) {
  return x / y;
}

// double power(double x, double y) {
//   double sum = 1;
//   for (int i = y; i > 0; --i) {
//     sum *= x;
//   }
//   return sum;
// }

double power(double x, double y) {
  return pow(x, y);
}
