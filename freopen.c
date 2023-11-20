#include <stdio.h>

void main(void)
{
    char str[80];
    freopen("OUTPUT", "w", stdout);

    puts("Digite uma string: ");
    fgets(str, sizeof(str), stdin);
    printf("%s", str);
}