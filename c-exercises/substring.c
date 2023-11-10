#include <stdio.h>
#include <string.h>


int main() {
  char s1[80], s2[80];

  scanf("%s %s", s1, s2);

  printf("%s", strstr(s1, s2));
}


