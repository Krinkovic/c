// 2025 kristoffer

#include <stdio.h>
#include "totavg.h"

int main() {
  int lines = 0;
  while (scanf("%d", &lines) == 1) {
    double arr[lines];
    for (int i = 0; i < lines; ++i) {
      scanf("%lf", &arr[i]);
    }
    printf("total %.1lf\n", total(arr, lines));
    printf("average %.1lf\n", average(arr, lines));
  }
}
