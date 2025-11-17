// 2025 Kristoffer

#include <stddef.h>
#include <stdio.h>

int main() {
  int lectures;

  while (scanf("%d", &lectures) == 1) {
    getchar();

    int coffees = 0, awake = 0;
    char machine;
    for (size_t i = 0; i < lectures; ++i) {
      machine = getchar();

      if (machine == '1')
        {coffees = 2;
        awake += 1;}

      else if (coffees > 0)
        {awake += 1;
        coffees -= 1;}
    }
    printf("%d\n", awake);
  }
}
