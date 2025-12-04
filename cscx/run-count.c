// 2025 Kristoffer

#include <stdio.h>
// #include <stdlib.h>
int main() {
  FILE *pfile = NULL;
  int run = 0;
  pfile = fopen("runcount.txt", "r");
  if (pfile) {
    fscanf(pfile, "%d", &run);
    fclose(pfile);
  }
  pfile = fopen("runcount.txt", "w");
  fprintf(pfile, "%d\n", ++run);
  fclose(pfile);
  printf("run #%d\n", run);
}
