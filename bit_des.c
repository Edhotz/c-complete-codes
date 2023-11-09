#include <stdio.h>


void main(void) 
{
  unsigned int i;
  int j;
  i = 0;

  // Deslocamento a esquerda
   for(j = 0; j < 4; j++) {
    i = i << 1;
    printf("deslocamento a esquerda %d:%d \n", j, i);
  }

  // Deslocamento a direita
  for(j = 0; j < 4; j++) {
    i = i >> 1;
    printf("deslocamento a direita %d:%d \n", j, i);
  }
}
