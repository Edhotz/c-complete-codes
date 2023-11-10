#include <stdio.h>

#define SIZE 3

void arr_transp(int arr[SIZE][SIZE]);
void print_arr(int arr[SIZE][SIZE]);

int main() 
{
  int arr[SIZE][SIZE] = {
    {1, 2, 3},
    {4, 5, 6},
    {7, 8, 9}
  };

  puts("Original Arr");

  print_arr(arr);

  puts("Transpose Arr");
  arr_transp(arr);
  print_arr(arr);
}

void arr_transp(int arr[SIZE][SIZE]) 
{
  int i, j, temp;

  for(i = 0; i < SIZE; i++) {
    for(j = 0; j < SIZE; j++) {
      temp = arr[i][j];
      arr[i][j] = arr[j][i];
      arr[j][i] = temp;
    }
  }
}

void print_arr(int arr[SIZE][SIZE])
{
  int i, j;

  for (i = 0; i < SIZE; i++){
    for(j = 0; j < SIZE; j++){
        printf("%d\n", arr[i][j]);
    }
  }
}


