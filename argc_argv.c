#include <stdio.h>
#include <stdlib.h>


void main(int argc, char *argv[])
{
  if (argc != 2) {
    printf("Your forget your name \n");
    exit(1);
  } 

  printf("ola %s\n", argv[1]);
}
