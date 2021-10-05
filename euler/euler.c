#include <stdio.h>
#include <stdlib.h>

#include "euler.h"

int mult_35_sum(double n) {

  int sum = 0;
  int i;

  for (i=0; i<n; i++) {
    if ( i % 3 == 0 ||
         i % 5 == 0)
      sum+= i;
  }
  return sum;
}

int sum_of_squares(int n) {
  int sum = 0;
  int i;

  for (i=0; i<=n; i++) {
    sum+= i*i;
  }
  return sum;
}

int square_of_sum(int n) {
  int sum = 0;
  int i;

  for (i=0; i<=n; i++) {
    sum+= i;
  }
  return sum * sum;
}

int sum_diff(int n) {
  return square_of_sum(n) - sum_of_squares(n);
}

int lcm(int max_divisor, int guess) {
  int m = guess;

  while (m % max_divisor != 0)
    m+= guess;

  return m;
}

int super_factor(int n) {
  int guess = n;
  int max_divisor = 1;

  while (max_divisor <= n) {
    guess = lcm(max_divisor, guess);
    max_divisor+= 1;
  }
  return guess;
}
