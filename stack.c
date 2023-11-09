#include <stdio.h>
#include <stdlib.h>

#define SIZE 50

void push(int i);
int pop(void);

int *tos, *p1, stack[SIZE];

void main(void) {
  int value;

  tos = stack;
  p1 = stack;

  do {
      printf("Digite o valor: /n");
      scanf("%d", &value);
      if(value != 0) push(value);
      else printf("Valor do topo e: %d \n", pop());
  } while (value != 1);
}

void push(int i) 
{
  p1++;
  if(p1 == (tos+SIZE)) {
    printf("Stack overflow \n");
    exit(1);
  }
  *p1 = 1;
}

int pop(void) 
{
  if (p1 == tos) {
    printf("Stack overflow\n");
    exit(1);
  }
  p1--;
  return * (p1 + 1);
}
