## Homework 5

### C Exercises

Modify the link below so it points to the `ex05` directory in your
student repository.

[Here is a link to the ex05 directory in my repository](https://github.com/nmohamed/ExercisesInC/tree/master/exercises/ex05)

### Think OS Chapter 5 reading questions

**Bits and bytes**

1) Suppose you have the value 128 stored as an unsigned 8-bit number.  What happens if you convert
it to a 16-bit number and accidentally apply sign extension?

10000000 is 128 as an 8-bit number. The 16 bit version is 00000000 10000000. If you apply sign extension you get the two's complement, which is 11111111 10000000. Since it's unsigned this would just be a different number entirely

2) Write a C expression that computes the two's complement of 12 using the XOR bitwise operator.
Try it out and confirm that the result is interpreted as -12.

(located in ex05 directory)
`0000 1100 ^ 1111 1111 + 1` results in:
```
#include <stdio.h>
void main ()
{
  char a = 12;
  char neg = (a ^ 255) + 1;
  printf("%i\n", neg);
}
```

3) Can you guess why IEEE floating-point uses biased integers to represent the exponent rather than a
sign bit or two's complement?

Sometimes numbers with smaller exponents need to compare before numbers with larger exponents, and biased exponents allow this. https://stackoverflow.com/questions/19864749/why-do-we-bias-the-exponent-of-a-floating-point-number

4) Following the example in Section 5.3, write the 32-bit binary representation of -13 in single precision
IEEE floating-point.  What would you get if you accidentally interpreted this value as an integer?

1 / 130 / 5 -> 1 10000010 10100000000000000000000

5) Write a function that takes a string and converts from lower-case to upper-case by flipping the sixth bit.  
As a challenge, you can make a faster version by reading the string 32 or 64 bits at a time, rather than one
character at a time.  This optimization is made easier if the length of the string is a multiple of 4 or 8 bytes.

(located in ex05 directory)
```
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
```
