#include <stdio.h>
#include <string.h>
#include <stdlib.h>


void ft_bubble(char *item, int count);

void main(void)
{
  char s[80];

  puts("Digite uma string: ");
  fgets(s, sizeof(s), stdin);

  ft_bubble(s, strlen(s));

  printf("String ordenada:  %s", s);
}

void ft_bubble(char *item, int count)
{
  register int a, b;
  register int t;

  for(a = 1; a < count; a++){
    for(b = count - 1; b >= a; --b) {
      if (item[b - 1] > item[b]) {
        t = item[b - 1];
        item[b - 1] = item[b];
        item[b] = t;
      }
    }
  }
}
