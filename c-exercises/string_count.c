#include <stdio.h>
#include <string.h>


int main() 
{
  char str[80];

  scanf("%s", str);

  printf("%ld\n", strlen(str));
  int i;

  for(i = 0; i < strlen(str); i++) {
    printf("%d\n", i);
 
  }
}

