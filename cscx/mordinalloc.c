// 2025 Kristoffer

#include <stdio.h>
#include <stdlib.h>

char* suffix(int n);
char* ordinal(int n);

int main()
{
    int n;
    char *str = NULL;
    while (scanf("%d",&n)==1) {
        char *str = ordinal(n);
        printf("%s\n", str);
    }
    free(str);
    return 0;
}

char* suffix(int n)
{
    if (n > 10 && n < 14) {
        return "th";
    }
    switch (n % 10) {
      case 1:
        return "st";
      case 2:
        return "nd";
      case 3:
        return "rd";
      default:
        return "th";
    }
}

char* ordinal(int n)
{
    char *suf = suffix(n);
    char *str = malloc(61 * sizeof(char));
    sprintf(str, "%d%s", n, suf);
    return str;
}
