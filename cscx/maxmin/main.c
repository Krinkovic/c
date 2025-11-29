// 2025 Kristoffer

#include <stdio.h>
#include "maxmin.h"

int main() {
  int lines = 0;
  while (scanf(" %d", &lines) == 1) {
    int arr[lines];
    for (int i = 0; i < lines; ++i) {
      scanf("%d", &arr[i]);
    }
    printf("maximum %d\n", maximum(arr, lines));
    printf("minimum %d\n", minimum(arr, lines));
  }
}
