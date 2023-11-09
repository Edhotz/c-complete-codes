#include <stdio.h>
#include <string.h>

int str_cat(char *s1, char *s2);

int main() 
{
  char s1[80], s2[80];

  puts("Insert The strings");
  scanf("%s%s", s1, s2);

  str_cat(s1, s2);
}

int str_cat(char *s1, char *s2)
{
  printf("%s%s\n", s1, s2);
  return 0;
}
