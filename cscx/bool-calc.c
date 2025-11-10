// 2025 Kristoffer

#include <iso646.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

void bNot(int p);
void bAnd(int p, int q);
void bOr(int p, int q);
void bXor(int p, int q);
void bImplies(int p, int q);

int main() {
  char pTemp[10], op[10], qTemp[10];
  bool p, q;
  while (true) {
    int args = scanf("%s %s %s", pTemp, op, qTemp);
    bool p, q = false;
    if (args == 2) {
      bNot(p);
    }
    else if (args == 3) {
      bNot(p, q);
    }
    else {
      break;
    }
  }
}

/*
    char ptemp[10],op[10], qtemp[10];
    int p, q = -1;
    scanf("%s %s %s", ptemp, op, qtemp);
    }
    if (strcmp(ptemp, "true") == 0) {
      int p = 1;
    }
    else {
      int p = 0;
    }
    if (strcmp(qtemp, "true") == 0) {
      int q = 1;
    }
    else {
      int q = 0;
    }

    if (strcmp(op, "not") == 0) {
      bNot(p);
    }
    else if (strcmp(op, "and") == 0){
      bAnd(p, q);
    }
    else if (strcmp(op, "or") == 0){
      bOr(p, q);
    }
    else if (strcmp(op, "xor") == 0){
      bXor(p, q);
    }
    else if (strcmp(op, "implies") == 0){
      bImplies(p, q);
    }
  }
}

void bNot(int p) {
  if (p == 0) {
    printf("true");
  }
  else printf("false");
}

void bAnd(int p, int q) {
  if (p == 1 && q == 1) {
    printf("true");
  }
  else printf("false");
}
*/
