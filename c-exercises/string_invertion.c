#include <stdio.h>
#include <string.h>

void inv_string(char str[]);

int main() 
{
  char str[80];
  scanf("%s", str);
  inv_string(str);
  printf("%s\n", str);
  return 0;
}

void inv_string(char str[]) 
{
  int n = strlen(str);
  int i;
  for(i = 0; i < n / 2; i++){
    char ch = str[i];
    str[i] = str[n - i - 1];
    str[n - i - 1] = ch;
  }
}
