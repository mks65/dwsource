#include <stdio.h>
#include <stdlib.h>

#include "euler.h"

int problem1(int limit) {
  int sum = 0;
  int i;

  for(i=0; i < limit; i++) {
    if (i % 3 == 0 ||
        i % 5 == 0) {
      sum+= i;
    }
  }
  return sum;
}

int square_sum(int limit) {
  int sum = 0;
  while (limit) {
    sum+= limit * limit;
    limit--;
  }
  return sum;
}
int sum_squares(int limit) {
  int sum = 0;
  while (limit) {
    sum+= limit;
    limit--;
  }
  return sum * sum;
}
int problem6(int limit){
  int square_sum_diff = square_sum(limit);
  int sum_square_diff = sum_squares(limit);
  return sum_square_diff - square_sum_diff;
}

int lcm(int max_divisor, int guess) {
  int mult = guess;
  while ( mult % max_divisor )
    mult+= guess;
  return mult;
}
int problem5(int limit) {
  int guess = limit;
  int max_divisor = 1;
  while (max_divisor <= limit) {
    guess = lcm(max_divisor, guess);
    max_divisor+= 1;
  }
  return guess;
}
