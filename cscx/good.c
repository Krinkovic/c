// 2025 Kristoffer

#include <stdio.h>

// “Good morning” between 4 and 11
// “Good afternoon” between 12 and 17
// “Good evening” between 18 and 23
// “Hi” otherwise

int main() {
  int time;
  while((scanf("%d", &time) != EOF)) {
    if (time >= 4 && time <= 11) {
      printf("Good morning\n");
    }
    else if (time >= 12 && time <= 17) {
      printf("Good afternoon\n");
    }
    else if (time >= 18 && time <= 23) {
      printf("Good evening\n");
    }
    else {
      printf("Hi\n");
    }
  }
}
