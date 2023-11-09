#include <stdio.h>

int main(void) {
  int a, b;


  puts("Insert two numbers");
  scanf("%d %d", &a, &b);

  if(b) {
    printf("%d\n", a / b);
  } else {
    puts("Dont possible division operations for 0");
  } 

}
