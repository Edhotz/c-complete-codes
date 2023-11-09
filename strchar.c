#include <stdio.h>
#include <string.h>


int main(void)
{
  char s1[80], s2[80];

  scanf("%s", s1);
  scanf("%s", s2);

  printf("comprimentos: %d %d\n", strlen(s1), strlen(s2));

  if(!strcmp(s1, s2)) {
    printf("String iguais! \n");
  } 

  strcat(s1, s2);
  printf("%s\n", s1);

  strcpy(s1,"Isso e um teste \n");
  printf(s1);

  if(stchr("alo", 'o')) {
    printf("o Esta em alo \n");
  } else if (strstr("Ola aqui", "ola")) {
    printf("Ola encontrado");
  }
}

