#include <stdio.h>

void print_vertical(char *str);

void main(int argc, char *argv[])
{
  if(argc){
    print_vertical(argv[1]);
  }
}

void print_vertical(char *str)
{
  while (*str) {
    printf("%c \n", *str++);
  }
}
