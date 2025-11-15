// 2025 Kristoffer

#include <stdio.h>

int main() {
  int start1, end1 = 0;
  int start2, end2 = 0;
  int hh1, mm1 = 0;
  int hh2, mm2 = 0;
  int hh3, mm3 = 0;
  int hh4, mm4 = 0;

  while (scanf("%d:%d %d:%d %d:%d %d:%d", &hh1, &mm1, &hh2, &mm2, &hh3, &mm3, &hh4, &mm4) == 8) {
    start1 = hh1 * 60 + mm1;
    end1 = hh2 * 60 + mm2;
    start2 = hh3 * 60 + mm3;
    end2 = hh4 * 60 + mm4;

    if (
      (start1 < start2 && end1 > start2) ||
      (start1 > start2 && start1 < end2)
    )
    {
      printf("conflict\n");
    }
    else {
      printf ("ok\n");
    }
  }
}
