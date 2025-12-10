// 2025 Kristoffer

#include <stdio.h>
#include <string.h>

void pop(int stack[], int *pos);
void push(int n, int stack[], int *pos);

int main() {
  int stack[100];
  char op[10];
  int n;
  int pos = -1;
  while (scanf(" %s", op) == 1) {
    if (strcmp(op, "pop") == 0) {
      pop(stack, &pos);
    } else {
      scanf("%d", &n);
      push(n, stack, &pos);
    }
  }
}

void pop(int stack[], int *pos) {
  if (*pos <= -1) {
    puts("empty");
  } else {
    printf("%d\n", stack[*pos]);
    *pos -= 1;
  }
}

void push(int n, int stack[], int *pos) {
  *pos += 1;
  stack[*pos] = n;

}
