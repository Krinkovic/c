// 2025 Kristoffer

#include "maxmin.h"

int minimum(int arr[], int n) {
  int min = arr [0];
  for (int i = 1; i < n; ++i){
    if (arr[i] < min) {
      min = arr[i];
    }
  }
  return min;
}

int maximum(int arr[], int n) {
  int max = 0;
  for (int i = 0; i < n; ++i){
    if (arr[i] > max) {
      max = arr[i];
    }
  }
  return max;
}
