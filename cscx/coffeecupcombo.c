// 2025 Kristoffer

#include <stddef.h>
#include <stdio.h>

int main() {
  int lectures;
  char machine[100000];

  while (scanf("%d", &lectures) == 1) {
    int coffees, awake = 0;
    scanf("%99999s", machine);

    for (size_t i = 0; i < lectures; ++i) {
      if (machine[i] == '1')
        {coffees = 2;
        awake += 1;}
      else if (coffees > 0)
        {awake += 1;
        coffees -= 1;}
    }

    printf("%d\n", awake);
  }
}
