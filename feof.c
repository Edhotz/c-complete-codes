/*
O programa seguinte, que copia arquivos-textos ou binários, contém um
exemplo de feof(). Os arquivos são abertos no modo binário e feof() verifica o
final de arquivo.
*/

#include <stdio.h>
#include <stdlib.h>

void main(int argc, char *argv[])
{
    FILE *in, *out;
    char ch;

    if(argc != 3) {
        printf("Voce esqueceu de informar o nome do arquivo \n");
        exit(1);
    }

    if((in = fopen(argv[1], "rb")) == NULL) {
        printf("O arquivo fonte nao pode ser aberto. \n");
        exit(1);
    }

    if((out = fopen(argv[2], "wb")) == NULL) {
        printf("Arquivo destino nao pode ser aberto \n");
        exit(1); 
    }

    while(!feof(in)) {
        ch = getc(in);
        if(!feof(in)) {
            putc(ch, out);
        }
    }

    fclose(in);
    fclose(out);
}