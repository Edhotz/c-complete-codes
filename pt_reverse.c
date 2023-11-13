#include <stdio.h>
#include <string.h>


void pt_reverse(char *s);

void main(void) 
{
  pt_reverse("I Like C lang");
}

void pt_reverse(char *s)
{
  register int t;

  for(t = strlen(s) - 1; t >= 0; t--) {
    putchar(s[t]);
  }
}
