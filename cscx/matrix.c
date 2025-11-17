// 2025 Kristoffer

#include <stdio.h>

void matrix(int size, int matrix[size][size]);
void matrixProduct(int size, int matrix1[size][size], int matrix2[size][size], int matrixResult[size][size]);
void printMatrix(int size, int matrix[size][size]);

int main() {
  int size;
  while (scanf("%d", &size) == 1) {
    int matrix1[size][size];
    int matrix2[size][size];
    int matrixResult[size][size];

    matrix(size, matrix1);
    matrix(size, matrix2);

    matrixProduct(size, matrix1, matrix2, matrixResult);
    printMatrix(size, matrixResult);
  }
}

void matrix(int size, int matrix[size][size]) {
  int n;
  for (int i = 0; i < size; ++i) {
    for (int j = 0; j < size; ++j) {
      scanf("%d", &n);
      matrix[i][j] = n;
    }
  }
}

void matrixProduct(int size, int matrix1[size][size], int matrix2[size][size], int matrixResult[size][size]) {
  for (int i = 0; i < size; ++i) {
    for (int j = 0; j < size; ++j) {
      int product = 0;
      for (int k = 0; k < size; k++) {
        product += matrix1[i][k] * matrix2[k][j];
      }
      matrixResult[i][j] = product;
    }
  }
}

void printMatrix(int size, int matrix[size][size]) {
  for (int i = 0; i < size; ++i) {
    printf("%d", matrix[i][0]);
    for (int j = 1; j < size; ++j) {
      printf(" %d", matrix[i][j]);
    }
    printf("\n");
  }
}
// 1[i,j]
// 2[j,i]

// [0,0] [0,1] [0,2]
// [1,0] [1,1] [1,2]
// [2,0] [2,1] [2,2]

// [0,0] [0,1] [0,2]
// [1,0] [1,1] [1,2]
// [2,0] [2,1] [2,2]

// 1[0,0] * 2[0,0] + 1[0,1] * 2[1,0] + 1[0,2] * 2[2,0]
// 1[0,0] * 2[0,1] + 1[0,1] * 2[1,1] + 1[0,2] * 2[2,1]
// 1[0,0] * 2[0,2] + 1[0,1] * 2[1,2] + 1[0,2] * 2[2,2]

// 1[1,0] * 2[0,0] + 1[1,1] * 2[1,0] + 1[1,2] * 2[2,0]
// 1[1,0] * 2[0,1] + 1[1,1] * 2[1,1] + 1[1,2] * 2[2,1]
// 1[1,0] * 2[0,2] + 1[1,1] * 2[1,2] + 1[1,2] * 2[2,2]

// 1[2,0] * 2[0,0] + 1[2,1] * 2[1,0] + 1[2,2] * 2[2,0]
// 1[2,0] * 2[0,1] + 1[2,1] * 2[1,1] + 1[2,2] * 2[2,1]
// 1[2,0] * 2[0,2] + 1[2,1] * 2[1,2] + 1[2,2] * 2[2,2]
