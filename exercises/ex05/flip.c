#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* flip(char* word){
  char* upper = malloc(sizeof(word));
  for(int i= 1; i < strlen(word); i++){
    upper[i] = word[i];
  }
  upper[0] = word[0] ^ 32;
  return upper;
}

void main ()
{
  char* word = flip("hello world");
  printf("%s\n", word);
}
