#include <stdio.h>
#include <stdlib.h>

void main(int argc, char *argv[])
{
    FILE *fp;
    char ch;

    if (argc != 2) {
        printf("Voce esquceu de digitar o nome do arquivo \n");
        exit(1);
    }

    if ((fp = fopen(argv[1], "w")) == NULL) {
        printf("O arquivo nao pode ser escrito");
        exit(1);
    }   

    do {
        ch = getchar();
        putc(ch, fp);
    } while (ch != '$');

    fclose(fp);
} 