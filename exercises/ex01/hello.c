#include <stdio.h>

void addp(int* p1, int* p2, int* p3){
  *p3 = *p1 + *p2;
}

int main() {
  int a = 1;
  int b = 2;
  int c;

  addp(&a,&b,&c);
  printf("%d\n", c);
  return 0;
}

/*
  1. The following two lines are added:
    subq	$16, %rsp
		movl	$5, -4(%rbp)
    Meaning that the assembly includes the new line.

  2. int x = 5 is not included in the assembly code.

  3. x is still in the instructions, but less code is necessary to print it.

  4. In the optomized version, it only stores y as 6, having optimized away
  the need to perform "5 + 1" everytime the code runs.

  Optimization seems to reduce the need for code that performs operations that
  are consistent away (such as 5 + 1, since neither integer is based on some
  variable input). Unused declarations are also optimized away.
*/
