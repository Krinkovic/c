// 2025 Kristoffer

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
  while (1) {
    char input[10];
    int a = 0;
    // int b;
    int n = 0;
    int d = 0;
    scanf(" %s", input);
    if (strlen(input) == 1) {
      a = atoi(input);
    } else {
      int i = 0;
      int len = strlen(input);
      char temp1[10];
      char temp2[10];
      char *pTemp = temp1;
      int divider = 0;

      for (i = 0; i < len; ++i) {
        if (input[i] != '/') {
          pTemp[i - divider] = input[i];
        } else {
          pTemp[i] = '\0';
          divider = i + 1;
          n = atoi(pTemp);
          pTemp = temp2;
          break;
        }
      }
      for (i = divider; i < len; ++i) {
        pTemp[i - divider] = input[i];
      }
      pTemp[i - divider] = '\0';
      d = atoi(pTemp);
    }
    printf("%d %d %d\n", a, n, d);
  }

  // scanf(" %s", input);
  // if (strlen(input) == 1) {
  //   b = atoi(input);
  // }
  // {
  //   printf("%d %d\n", a, b);
  // }
}
