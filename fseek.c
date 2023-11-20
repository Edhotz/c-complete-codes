#include <stdio.h>
#include <stdlib.h>


void main(int argc, char * argv[])
{
    FILE *fp;

    if(argc != 3) {
        printf("Uso: SEEK nomearq byte \n");
        exit(1);
    }

    if(fseek(fp, atol(argv[2]), SEEK_SET)) {
        printf("Erro na busca \b");
        exit(1);
    }


    printf("O byte em %ld e %c . \n", atol(argv[2]), getc(fp));
    fclose(fp);
}