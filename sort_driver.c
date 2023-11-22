#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void bubble(char *item, int count);

void main()
{
  char s[80];

  puts("Digite uma string: ");
  fgets(s, sizeof(s), stdin);
  bubble(s, strlen(s));
  printf("string arranjada: %s\n", s);
}

void bubble(char *item, int count)
{
  register int a, b;
  register int t;

  for(a = 1; a < count; a++) {
    for(b = count - 1; b >= a; --b) {
      if(item[b - 1] > item[b]) {
        t = item[b - 1];
        item[b - 1] =  item[b];
        item[b] = t;
      }
    }
  }
}
