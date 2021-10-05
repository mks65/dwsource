#include <stdlib.h>
#include <stdio.h>
#include <time.h>

#define ARR_SIZE 10

void rand_populate(int *arr, int size);
void print_arr(int *arr, int size);
double average(int *arr, int size);
void arr_copy(int *arr0, int *arr1, int size);

int main() {
  //seed with current time
  srand(time(NULL));

  //setup
  int ray[ARR_SIZE];
  int ray1[ARR_SIZE];

  rand_populate(ray, ARR_SIZE);
  print_arr(ray, ARR_SIZE);
  printf("array average: %lf\n", average(ray, ARR_SIZE));
  arr_copy(ray, ray1, ARR_SIZE);
  print_arr(ray1, ARR_SIZE);
  return 0;
}


void rand_populate(int *arr, int size) {
  int i = 0;
  int r;
  for(i=0; i<size; i++) {
    r = rand() % 100;
    arr[i] = r;
  }
}


void print_arr(int *arr, int size) {
  int i = 0;
  printf("[ ");
  for(i=0; i<size; i++)
    printf("%d ", arr[i]);
  printf("]\n");
}

double average(int *arr, int size) {
  int i = 0;
  double sum = 0;
  for(i=0; i<size; i++) {
    sum+= arr[i];
  }
  return sum/size;
}

void arr_copy(int *arr0, int *arr1, int size) {

  while( size ) {
    *arr1 = *arr0;
    arr1++;
    arr0++;
    size--;
  }
}
