#include <stdio.h>
#include <stdlib.h>

#include "euler.h"

int main() {

  int test, n;
  int check_answer, answer;

  printf("problem 1\n");
  test = 10;
  n = 1000;
  check_answer = mult_35_sum(10.0);
  answer = mult_35_sum(1000.0);
  printf("\tcheck %d: %d\n", test, check_answer);
  printf("\tproblem %d: %d\n", n, answer);


  printf("problem 6\n");
  test = 10;
  n = 100;
  check_answer = sum_diff(test);
  answer = sum_diff(n);
  printf("\tcheck %d: %d\n", test, check_answer);
  printf("\tproblem %d: %d\n", n, answer);

  printf("problem 5\n");
  test = 10;
  n = 20;
  check_answer = super_factor(test);
  answer = super_factor(n);
  printf("\tcheck %d: %d\n", test, check_answer);
  printf("\tproblem %d: %d\n", n, answer);
  return 0;
}
