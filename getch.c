 #include <stdio.h>
 #include <conio.h>
 #include <ctype.h>


 void main()
 {
    char ch;

    puts("Entre com algum texto (digite ponto para sair).");

    do {
        ch = getch();
        if(islower(ch)) {
            toupper(ch);
        } else {
            tolower(ch);
        }

        putchar(ch);
    } while(ch != '.');
 }