#include <stdio.h>

void main ()
{
  char a = 12;
  char neg = (a ^ 255) + 1;
  printf("%i\n", neg);
}
