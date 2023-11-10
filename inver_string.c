#include <stdio.h>
#include <string.h>

char *p = "Ola amigo";

void main(void) 
{
  register int t;

  printf("%p \t", &p);

  for(t = strlen(p) - 1; t > -1; t--){
    printf("%c", p[t]);
  }
}
