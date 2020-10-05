#include <stdio.h>
#include <stdlib.h>

#include "euler.h"

int main() {

  int p1t, p1;
  int p6t, p6;
  int p5t, p5;

  p1t = problem1(10);
  p1 = problem1(1000);
  printf("Euler problem 1 test: %d\tactual: %d\n", p1t, p1);

  p6t = problem6(10);
  p6 = problem6(100);
  printf("Euler problem 6 test: %d\tactual: %d\n", p6t, p6);

  p5t = problem5(10);
  p5 = problem5(20);
  printf("Euler problem 5 test: %d\tactual: %d\n", p5t, p5);
}
