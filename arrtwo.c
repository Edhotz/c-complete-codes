
#include <stdio.h>

int main()
{
  int matriz[2][3] = {{1, 2, 3}, {4, 5, 6}};


  for (int i = 0; i < 2; i++) {
    for(int j = 0; j < 3; j++) {
      printf("Elemento na posicao [%d][%d] is %d\n", i , j, matriz[i][j]);
    }
  }

  return 0;
}
