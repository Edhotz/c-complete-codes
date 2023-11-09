#include <stdio.h>
#include <stdlib.h>


int main() {
  int magic;
  int guess;

  magic = rand();

  puts("Guess a number: ");
  scanf("%d", &guess);

  if(guess == magic) puts("**Done**");
  else puts("**Fail**");
}
