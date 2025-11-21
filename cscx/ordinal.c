// 2025 Kristoffer

#include <stdio.h>

char* suffix(int n);
char* ordinal(int n, char buffer[]);

int main()
{
    int n;
    char buffer[60]; /* 60 is far more than we need */
    while (scanf("%d",&n)==1) {
        ordinal(n, buffer);
        printf("%s\n",buffer);
    }
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

char* ordinal(int n, char buffer[])
{
    char *suf = suffix(n);
    sprintf(buffer, "%d%s", n, suf);
    return buffer;
}
