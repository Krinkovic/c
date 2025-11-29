// 2025 Kristoffer

#include "totavg.h"

double total(double arr[], int n) {
  double total = 0;
  for (int i = 0; i < n; ++i) {
    total += arr[i];
  }
  return total;
}

double average(double arr[], int n) {
  double average = 0;
  for (int i = 0; i < n; ++i) {
    average += arr[i];
  }
  return average / n;
}
