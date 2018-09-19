#include <stdlib.h>
#include <stdio.h>
#include <time.h>

#define ARR_SIZE 10

//main
int main() {
  srand(time(NULL));

  int arr[ARR_SIZE]; // create array and populate
  int i;
  for(i = 0; i < (ARR_SIZE - 1); i++){
    arr[i] = rand();
  }
  arr[ARR_SIZE - 1] = 0; // last element should be 0

  printf("Original array: \n");
  printf("[");
  for(i = 0; i < ARR_SIZE; i++){
    printf("%d", arr[i]);
    if(i != ARR_SIZE - 1){
      printf(", ");
    }
  }
  printf("]\n \n");

  int arr_rev[ARR_SIZE]; // create reversed array

  //reverse array
  for(i = 0; i < ARR_SIZE; i++){
    *(arr_rev + i) = *(arr + ARR_SIZE - 1 - i);
  }

  printf("Reversed array: \n");
  printf("[");
  for(i = 0; i < ARR_SIZE; i++){
    printf("%d", arr_rev[i]);
    if(i != ARR_SIZE - 1){
      printf(", ");
    }
  }
  printf("]\n");

  return 0;
}
