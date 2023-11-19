#include <stdio.h>
#include <string.h>

void main() 
{
    char str[80];

    fgets(str, sizeof(str), stdin);
    printf("O comprimento e %ld", strlen(str));
}