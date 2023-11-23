#include <string.h>
#include <stdio.h>
#include <stdlib.h>


void main(void)
{

}

void ft_insert(char *item, int count)
{
  register int a, b;
  char t;

  for(a = 1; a < count, ++a) {
    t = item[a];
    for(b = a - 1; b >= 0; && t < item[b]; b--) {
      item[b + 1] = item[b];
      item[b + 1] = t;
    }
  }
}
