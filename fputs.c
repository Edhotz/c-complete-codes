#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void main(void) {
    char str[80];
    FILE *fp;


    if((fp = fopen("test.txt", "w")) == NULL) {
        printf("O arquivo nao pode ser escrito \n");
        exit(1);
    } 

    do {
        printf("Digite uma string (CR para sair): \n");
        fgets(str, sizeof(str), stdin);
        strcat(str, "\n");
        fputs(str, fp);
    } while(*str != '\n');
}