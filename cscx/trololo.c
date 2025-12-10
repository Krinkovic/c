// 2025 Kristoffer

#include <stdio.h>

int main() {
  int bounce;
  int lo;
  int preLo;
  int postLo;

  while(scanf(" %d %d", &bounce, &lo) == 2) {
    for (int i = 0; i < bounce; ++i) {
      if (i % 2 == 0) {
        preLo = 0;
        postLo = lo - 1;
        for (int i = 0; i < lo; ++i) {
          printf("Tro");
          for (int i = 0; i < preLo; ++i) {
            printf("lo");
          }
          preLo += 1;
          printf("\033[1;34mLO\033[0m");
          for (int i = 0; i < postLo; ++i) {
            printf("lo");
          }
          postLo -= 1;
          puts("...");
        }
      } else {
        preLo = lo - 1;
        postLo = 0;
        for (int i = 0; i < lo; ++i) {
          printf("Tro");
          for (int i = 0; i < preLo; ++i) {
            printf("lo");
          }
          preLo -= 1;
          printf("\033[1;34mLO\033[0m");
          for (int i = 0; i < postLo; ++i) {
            printf("lo");
          }
          postLo += 1;
          puts("...");
        }
      }
    }
  }
}
