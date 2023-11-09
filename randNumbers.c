#include <stdio.h>
#include <stdlib.h>


int main() {
  int magic, guess;

  magic = rand();

  puts("Insert you guess ");
  scanf("%d", &guess);


  if(guess == magic) {
    puts("You Win");
  } else {
    puts("You Lose");
  }
  return 0;
}
