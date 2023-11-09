#include <stdio.h>


int _pwd(register int m, register int e)
{
  register fint temp;

  temp = 1;

  for(;e;e--) temp = temp * m;
  return temp;
}

int main() {
  int hex = 0x70; // decimal
  int oct = 012; //  octal
}


int x;
char ch;
float f;

void func(void) {
  ch = x;
  x = f;
  f = ch;
  f = x;
}
