#include <stdio.h>

enum suit {hearts, clubs, diamonds, spades};
typedef enum suit suit_t;

suit_t suit(suit_t s) {
  switch (s) {
    case 0:
      return hearts;
      break;
    case 1:
      return clubs;
      break;
    case 2:
      return diamonds;
      break;
    case 3:
      return spades;
      break;
  }
}
