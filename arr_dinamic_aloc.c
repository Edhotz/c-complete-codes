#include <stdio.h>
#include <stdlib.h>

#define LINHA 3
#define COLUNA 4

int main() 
{
  int **matriz;

  matriz = (int **)malloc(LINHA * sizeof(int *));

  if (matriz == NULL) {
    fprintf(stderr, "Falha na alocacao de memoria\n");
    return 1;
  }

  /*
   * Alocacao de memoria para as colunas
   */

  for (int i = 0; i < LINHA; i++) {
    matriz[i] = (int *)malloc(COLUNA * sizeof(int));
    if(matriz[i] == NULL){
      fprintf(stderr, "Falha na alocacao de memoria \n");

      /*Liberacao de memoria ja alocada */

      for(int j = 0; j < i; j++) {
        free(matriz[j]);
      }

      free(matriz);
      return -1;
    }
  }

  // Uso da matriz
  
  // Liberacao da memoria
  //
  for(int i = 0; i < LINHA; i++) {
    free(matriz[i]);
  }

  free(matriz);
  return 0;
}
