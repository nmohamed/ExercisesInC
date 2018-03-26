/*
  Nora Mohamed
  Exercise 2
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE 10

int sum (int array[], int size_of_array){
  int sum = 0;
  for(int i = 0; i < size_of_array; i++ ){
    sum = sum + array[i];
  }
  return sum;
}

int main (){
  char string_val[SIZE];
  int val;
  int result;
  int array[SIZE];
  int count = 0;
  while(1) {
    result = scanf("%[^\n]%*c", string_val);
    if(result == EOF)
      break;
    if(strlen(string_val) > 9){
      puts("Input too long, try again.");
      continue;
    }
    val = atoi(string_val);
    printf("array[%d]: %d\n", count, val);
    array[count] = val;
    count++;
    if(count == SIZE){
      puts("Reached max size of array.");
      break;
    }
  }
  printf("Sum of numbers: %d\n", sum(array, count));
  return 0;
}
