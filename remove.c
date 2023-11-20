#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>


int main(int argc, char * argv[]) 
{
    char str[80];
    if(argc != 2) {
        printf("uso: xerase <nomearqui> \n");
        exit(1);
    }

    printf("Apaga %s? (S/N): ", argv[1]);
    fgets(str, sizeof(str), stdin);

    if(toupper(*str) == 'S') {
        if(remove(argv[1])) {
            printf("O arquivo nao pode ser apagado. \n");
            exit(1);
        }
    }

    return 0;
}