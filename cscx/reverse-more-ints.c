// 2025 Kristoffer

#include <stdlib.h>
#include <stdio.h>

int main() {
  int sz;
  size_t i;
  while (scanf("%d", &sz) == 1) {
    int *arr = malloc(sz * sizeof(int));
    if (arr == NULL) {
      puts("out of memory");
      exit(1);
    }
    for (i = 0 ; i < sz; ++i) {
      scanf("%d", &arr[i]);
    }
    printf("reverse:");
    for (i = sz; i-- > 0; ) {
      printf("% d", arr[i]);
    }
    puts("");
    free(arr);
  }
}
