#include <stdio.h>

int main(void)
{
    char s[80], *str;
    int space = 0; // Initialize space to 0

    puts("Input a string");
    scanf("%s", s);

    str = s;

    while (*str) {
        if (*str == ' ') {
            space++; // Increment space when a space is encountered
        }
        str++;
    }

    printf("%d spaces found.\n", space);

    return 0;
}

