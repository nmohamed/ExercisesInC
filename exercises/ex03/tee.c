/*
  Nora Mohamed
  HW 03
  Implemention of the "tee" command.
  3) It took a while to read through the documentation for file IO. I started with trying to use fgets, but ran into difficult so I just tried fgetc and went with that instead. I'd like to try to get htat to work next time. Also, more error checking.
  4) Uses malloc/better use of pointers. It also has no comments. Seems to care more about space allocation.
*/

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  FILE *fp;
  char c;
  int opt;
  int append = -1;

  // Check command line arguments
  if (argc < 2){
    puts("tee requires at least 1 argument");
    return -1;
  }

  while((opt = getopt(argc, argv, "a")) != -1){
    switch(opt){
      case 'a':
        append = 0;
        break;
    }
  }

  // Open file to write to
  if (append == 0) {
    fp = fopen(argv[1], "a");
  }
  else {
    fp = fopen(argv[1], "w+");
  }
  if(fp == NULL) {
      perror("Error opening file");
      return(-1);
   }

  // Read character from stdin while stdin still has characters to read from
  while (!feof(stdin)) {
    c = fgetc(stdin);

    // Check for EOF character
    if (c == EOF){
      break;
    }
    printf("%c", c);

    // Write to file
    fputc(c, fp);
  }

  // Close file
  fclose(fp);
  return 0;
}
