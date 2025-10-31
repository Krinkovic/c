// 2025 Kristoffer

#include <stdio.h>

void hello(int n) ;

int main() {
  int hellos = 0 ;
  scanf("%d", &hellos) ;
  hello(hellos) ;
}

// For loop version
void hello(int n) {
  for (int i = n; n > 0; --n) {
    printf("%s\n", "Hello, World!") ;
      }
}

// Recursion version
// void hello(int n) {
//   if (n == 0) {
//     return ;
//   }
//   else {
//     printf("%s\n", "Hello, World!") ;
//     hello(n - 1) ;
//   }
// }
