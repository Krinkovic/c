// 2025 Kristoffer

#include <stdio.h>

int main() {
  int size;
  while (scanf("%d", &size) == 1) {
    int matrix[size][size];
    int n;

    for (int i = 0; i < size; ++i) { // iterate through each column
      for (int j = 0; j < size; ++j) { // iterate through each row
        scanf("%d", &n);
        matrix[j][i] = n;
      }
    }

    for (int i = 0; i < size; ++i) { // iterate through each column
      printf("%d", matrix[i][0]);
      for (int j = 1; j < size; ++j) { // iterate through each row
        printf(" %d", matrix[i][j]);
        matrix[i][j] = n;
      }
      printf("\n");
    }
  }
}
