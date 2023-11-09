#include <stdio.h>

int x;
char ch;
float f;

void func(void) 
{
  ch = x;
  x = f;
  f = ch;
  f = x;
}

void main(void) 
{
  x = ch = f = 0;
}

