// 2025 Kristoffer

#include <stdio.h>

int main() {
  FILE *pfile = NULL;
  pfile = fopen("message.txt", "w");
  fprintf(pfile, "Hello file system.\n");
  fprintf(stdout, "%s", "Created text file message.txt\n");
  fclose(pfile);
}
