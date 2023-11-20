#include <stdio.h>
#include <stdlib.h>


void main(int argc, char *argv[]) 
{
    FILE *fp;
    char ch;

    if(argc != 2) {
        printf("Voce esquceu de digitar o nome do arquivo \n");
        exit(1);
    }

    if((fp = fopen(argv[1], "r")) == NULL) {
        printf("Nao foi possivel abrir o arquivo \n");
        exit(1);
    }

    ch = getc(fp);

    while(ch != EOF) {
        putchar(ch);
        ch = getc(fp);
    }

    fclose(fp);
}