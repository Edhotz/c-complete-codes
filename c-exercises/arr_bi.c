#include <stdio.h>

int main() {
  float arr[3][3] = {
    {1, 2, 3},
    {4, 5, 6},
    {7, 8, 9}
  };

  float indice = arr[2][2];
  
  float sum = 0.0;

  printf("%f\n", indice);

  for(int i = 0; i < 3; i++) {
    for(int j = 0; j < 3; j++) {
      printf("[%d][%d] %0.2f\n", i, j, arr[i][j]);
         sum += arr[i][j]; 
      printf("%0.2f\n", sum);
    }
  }
}
