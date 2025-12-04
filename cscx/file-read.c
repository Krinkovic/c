// 2025 Kristoffer

#include <stdio.h>

int main() {
  FILE *pfile = fopen("name.txt", "r");
  if (!pfile) {
    puts("name.txt: file not found");
    return 1;
  }
  char name[61];
  fscanf(pfile, " %60s", name);
  printf("%s\n", name);
  fclose(pfile);
}
