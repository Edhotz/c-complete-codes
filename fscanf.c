/*
Exemplo de fscaf() - fprint()
*/

#include <stdio.h>
#include <stdlib.h>

void main(void)
{
    FILE *fp;
    char s[80];
    int t;

    if((fp = fopen("test.txt", "w")) == NULL) {
        puts("O Arquivol nao pode ser aberto");
        exit(1);
    } 

    puts("Digite uma string e um numero: ");
    fscanf(stdin, "%s%d", s, &t);

    fprintf(fp, "%s %d", s, t);
    fclose(fp);

    if((fp = fopen("test.txt", "r")) == NULL) {
        printf("O arquivo nao pode ser aberto. \n");
        exit(1);
    }

    fscanf(fp, "%s%d", s, &t);
    fprintf(stdout, "%s %d", s, t);
}