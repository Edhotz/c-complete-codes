#include <stdio.h>
#include <ctype.h>


void main(void)
{
    char ch;
    
    puts("Entre com algum texto (digite um ponto para sair.");

    do {
        ch = getchar();

        if(islower(ch)){
            ch = toupper(ch);
        } else {
            ch = tolower(ch);
        }

        putchar(ch);

    } while(ch != '.');
}