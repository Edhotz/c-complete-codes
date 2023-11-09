#include <stdio.h>

void sp_to_dash(const char *str);

void main() {
  sp_to_dash("Its is the one test");
}

void sp_to_dash(const char *str) {
  while(*str) {
    if(*str == ' '){
      printf("%c\n", '-');
    } else {
      printf("%c\n", *str);
    }

    str++;
  }
}
