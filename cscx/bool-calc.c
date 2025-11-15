// 2025 Kristoffer

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

void bNot(bool b);
void bAnd(bool a, bool c);
void bOr(bool a, bool c);
void bXor(bool a, bool c);
void bImplies(bool a, bool c);

int main() {
  char aTemp[10], bTemp[10], cTemp[10];
  bool p, q;
  int args;
  while ((args = scanf("%s %s", aTemp, bTemp)) == 2) {

    if (strcmp(aTemp, "not") == 0) {
      if (strcmp(bTemp, "true") == 0) {
        q = true;
      }
      else {
        q = false;
      }
      bNot(q);
    }
    else {
      scanf("%s", cTemp);
      if (strcmp(aTemp, "true") == 0) {
        p = true;
      }
      else {
          p = false;
      }
      if (strcmp(cTemp, "true") == 0) {
        q = true;
      }
      else {
        q = false;
      }

      if (strcmp(bTemp, "and") == 0){
        bAnd(p, q);
      }
      if (strcmp(bTemp, "or") == 0){
        bOr(p, q);
      }
      if (strcmp(bTemp, "xor") == 0){
        bXor(p, q);
      }
      if (strcmp(bTemp, "implies") == 0){
        bImplies(p, q);
      }
    }
  }
}

void bNot(bool q) {
  if (q == false) {
    printf("true\n");
  }
  else printf("false\n");
}

void bAnd(bool p, bool q) {
  if (p == true && q == true) {
    printf("true\n");
  }
  else printf("false\n");
}

void bOr(bool p, bool q) {
  if (p == true || q == true) {
    printf("true\n");
  }
  else printf("false\n");
}

void bXor(bool p, bool q) {
  if (p == true && q == false || p == false && q == true) {
    printf("true\n");
  }
  else printf("false\n");
}

void bImplies(bool p, bool q) {
  if (p == true && q == false) {
    printf("false\n");
  }
  else printf("true\n");
}
