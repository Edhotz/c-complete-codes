#include <stdio.h>


int main() {
  int arr[3][3] = {{1,2,3}, {4,5,6}, {7,8,9}};
  int sum = 0;
  int *ptr = &arr[0][0];

  sum = *(ptr + 0) + *(ptr + 1) + *(ptr + 2) + *(ptr + 3) + *(ptr + 4) + *(ptr + 5) +   + *(ptr + 6) +  *(ptr + 7)  + *(ptr + 8);  

  printf("%d\n", sum);


  return 0;
}
