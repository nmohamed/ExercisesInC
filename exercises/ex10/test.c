
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <stdlib.h>

int main() {
  int status;
  for (int i=0; i<2; i++) {
    printf("a\n");
    pid_t pid = fork();
    if (pid == 0) {
      printf("%d\n", i);
      // exit(i);
    }
  }
  printf("b\n");
  for (int i=0; i<2; i++) {
  pid_t pid = wait(&status);
  printf("c\n");
  }
}
