#include <stdio.h>


int main() {
  int matriz[3][3] = {{1,2,3},{4,5,6}, {7,8,9}};
  int *ptr = &matriz[0][0]; 
  

  // Acessando elementos da matriz usando ponteiros
  
  printf("matriz[0][0] = %d\n", *ptr);
  printf("matriz[0][0] = %d\n", *(ptr + 5));

  return 0;
}


