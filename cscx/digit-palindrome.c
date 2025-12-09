// 2025 Kristoffer

#include <stdio.h>

int palindrome(int x);

int main() {
  int x;
  while (scanf(" %d", &x) == 1) {
    if (palindrome(x) == 1) {
      printf("%d is palindrome\n", x);
    } else {
      printf("%d is not palindrome\n", x);
    }
  }
}

int palindrome(int original) {
  int reversed = 0;
  int x = original;
  int d = 0;
  while (x > 0) {
    d = x % 10;
    x = x / 10;
    reversed = reversed * 10 + d;
  }
  if (reversed == original){
    return 1;
  } else {
    return 0;
  }
}
