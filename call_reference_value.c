#include <stdio.h>

int sqr(int x);
void swap(int *x, int *y);

void main(void) 
{
  int t = 10;

  int i, j;

  i = 20;
  j = 20;

  swap(&i, &j);

  printf("%d %d", sqr(t), t);
}


// copia de valor da variavel t
int sqr(int x) 
{
  x =  x * x;
  return x;
}

void swap(int *x, int *y)
{
  int temp;

  temp = *x;
  *x = *y;
  *y = temp;
  printf("y = %ls\n", y);
}
