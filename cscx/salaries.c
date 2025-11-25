// 2025 Kristoffer

#include <stdio.h>

#define MAX_NAME 60

struct employee {
    char name[MAX_NAME];
    int salary;
};

int total_salary(const struct employee employees[], size_t n_employees);
struct employee highest_salary(const struct employee employees[], size_t n);
struct employee lowest_salary(const struct employee employees[], size_t n);

int main() {
  int nPeople = 0;

  while (scanf(" %d", &nPeople) == 1) {
    struct employee employees[nPeople];
    for (int i = 0; i < nPeople; ++i) {
      scanf(" %s %d", employees[i].name, &employees[i].salary);
    }

    struct employee highest = highest_salary(employees, nPeople);
    struct employee lowest = lowest_salary(employees, nPeople);
    int total = total_salary(employees, nPeople);

    printf("%s has the highest salary: %d kr\n", highest.name, highest.salary);
    printf("%s has the lowest salary: %d kr\n", lowest.name, lowest.salary);
    printf("The total monthly cost is %d kr\n", total);
  }
}

int total_salary(const struct employee employees[], size_t n_employees) {
  int total = 0;
  for (int i = 0; i < n_employees; ++i) {
    total += employees[i].salary;
  }
  return total;
}

struct employee highest_salary(const struct employee employees[], size_t n) {
  struct employee highest = employees[0];
  for (int i = 1; i < n; ++i) {
    if (employees[i].salary > highest.salary) {
      highest = employees[i];
    }
  }
  return highest;
}

struct employee lowest_salary(const struct employee employees[], size_t n) {
  struct employee lowest = employees[0];
  for (int i = 1; i < n; ++i) {
    if (employees[i].salary < lowest.salary) {
      lowest = employees[i];
    }
  }
  return lowest;
  }
