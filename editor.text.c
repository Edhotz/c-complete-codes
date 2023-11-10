#include <stdio.h>

#define MAX 100
#define LEN 80

char text[MAX][LEN];


/* SIMPLE TEXT EDITOR */


void main()
{
  register int t, i, j;

  printf("Digite uma linha vazia para sair \n");
  for(t = 0; t < MAX; t++) {
    printf("%d: \n", t);
    scanf("%s", text[t]);

    if(!*text[t]) {
      break;
    }
  }

  for(i = 0; i < t; i++) {
    for(j = 0; text[i][j]; i++) {
      putchar(text[i][j]);
    }

    putchar('\n');
  }
}
