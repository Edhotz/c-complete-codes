#include <stdio.h>


int main() {

}


void menu (void) {
  char ch;

  puts("1 - Check Spell");
  puts("2 - Fix Spell Errors");
  puts("3 - Display Spell Errors");
  puts("Press any key to abord");

  puts("** Enter your choice**");

  ch = getchar();
  
  switch (ch) {
    case '1':
      check_spelling();
      break;
    case '2':
      correct_errors();
      break;
    case '3':
      display_errors();
      break;
    default: 
      puts("No option selected");
  }

  
} 
