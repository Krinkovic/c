// 2025 Kristoffer

#include <stdio.h>
#include "employee.h"

int main() {
  int nPeople = 0;

  while (scanf(" %d", &nPeople) == 1) {
    struct employee employees[nPeople];
    for (int i = 0; i < nPeople; ++i) {
      scanf(" %s %d", employees[i].name, &employees[i].salary);
    }

    struct employee *highest = highest_salary(employees, nPeople);
    struct employee *lowest = lowest_salary(employees, nPeople);
    int total = total_salary(employees, nPeople);

    printf("%s has the highest salary: %d kr\n", highest->name, highest->salary);
    printf("%s has the lowest salary: %d kr\n", lowest->name, lowest->salary);
    printf("The total monthly cost is %d kr\n", total);

  }
}
