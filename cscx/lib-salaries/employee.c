// 2025 Kristoffer

#include "employee.h"

int total_salary(const struct employee employees[], size_t n_employees) {
  int total = 0;
  for (int i = 0; i < n_employees; ++i) {
    total += employees[i].salary;
  }
  return total;
}

struct employee *highest_salary(struct employee employees[], size_t n) {
  struct employee *highest = &employees[0];
  for (int i = 1; i < n; ++i) {
    if (employees[i].salary > highest->salary) {
      highest = &employees[i];
    }
  }
  return highest;
}

struct employee *lowest_salary(struct employee employees[], size_t n) {
  struct employee *lowest = &employees[0];
  for (int i = 1; i < n; ++i) {
    if (employees[i].salary < lowest->salary) {
      lowest = &employees[i];
    }
  }
  return lowest;
  }
