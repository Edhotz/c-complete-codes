/*
    Escreve alguns dados nao caracteres em arquivo em disco e le de volta.
*/

#include <stdio.h>
#include <stdlib.h>

void main(void)
{
    FILE *fp;
    double d = 12.21;
    int i= 101;
    long l = 1212211221L;


    if ((fp = fopen("test.txt", "wb+")) == NULL) {
        puts("Arquivo nao pode ser aberto");
        exit(1);
    }

    fwrite(&d, sizeof(double), 1, fp);
    fwrite(&i, sizeof(int), 1, fp);
    fwrite(&l, sizeof(long), 1, fp);


    rewind(fp);

    fread(&d, sizeof(double), 1, fp);
    fread(&i, sizeof(int), 1, fp);
    fread(&l, sizeof(long), 1, fp);

    printf("%.2f, %d, %.2ld,", d, i, l);

    fclose(fp);d
}