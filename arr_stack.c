#include <stdio.h>
#include <stdlib.h>

#define SIZE 50

int *tos, *p1, stack[SIZE];
void push(int i);
void pop(void);

void main(void) 
{
  int value;

  tos = stack;
  p1 = stack;

  do {
    printf("Digite o valor \n");
    scanf("%d", &value);
    if(value != 0){
      push(value);
    } else {
      printf("valor do topo %d\n", pop());
    }
} while (value != -1);
}

void push(int i)
{
  p1++;
  if(p1 == (tos + SIZE)) {
    puts("Stack Overflow");
    exit(1);
  }

  *p1 = i;
}

void pop(void) 
{
  if(p1 == tos){
    puts("Stack Overflow");
    exit(1);
  }

  p1--;
  *(p1 + 1);
}
