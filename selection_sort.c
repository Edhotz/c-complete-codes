#include <stdio.h>
#include <string.h>
#include <stdlib.h>


void main(void)
{

}

void ft_select(char *item, int count)
{
  register int a, b;
  int exchange;
  char t;

  for(a = 0; a < count; ++a) {
    exchange = 0;
    c = a;
    t = item[a];

    for(b = a + 1; b < count; ++b) {
      if(item[b] < t) {
        c = b;
        t = item[b];
        exchange = 1;
      }
    }

    if(exchange) {
      item[c] = item[a];
      item[a] = t;
    }
  }
}
