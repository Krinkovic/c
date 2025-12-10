// 2025 Kristoffer

#include <stdio.h>

int main() {
  int bounce;
  int lo;

  while(scanf(" %d %d", &bounce, &lo) == 2) {
    int preLo = 0;
    int postLo = lo - 1;
    for (int i = 0; i < bounce; ++i) {
      for (int i = 0; i < lo; ++i) {
        printf("Tro");
        for (int i = 0; i < preLo; ++i) {
          printf("lo");
        }
        preLo += 1;
        printf("\033[1;34mLO\033[0m");
        for (int i = postLo; i > 0; --i) {
          printf("lo");
        }
        postLo -= 1;
        puts("...");
      }

      for (int i = 0; i < lo; ++i) {
        printf("Tro");
        for (int i = preLo; i >= 0; --i) {
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
      // for (int i = 0; i < lo; ++ i) {
      // }
    }
  }
}
