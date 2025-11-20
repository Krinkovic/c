// 2025 Kristoffer

#include <stdio.h>
#define MAX 10000

void triple_array_elements(int arr[], int sz);


int main()
{
    int a[MAX];
    int n = 0;
    int i;
    char c;
    while (scanf("%d%c", &a[n++], &c)==2) {
        if (c == ' ')
            continue;
        triple_array_elements(a, n);
        for (i=0; i<n; i++)
            printf("%s%d", i?" ":"", a[i]);
        printf("\n");
        n = 0;
    }
    return 0;
}

void triple_array_elements(int arr[], int sz) {
  for (int i = 0; i < sz; ++i) {
    arr[i] *= 3;
  }
}
