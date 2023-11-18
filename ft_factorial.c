#include <stdio.h>


int ft_factorial(int n)
{
  if(n == 0){
    return 1;
  } else {
    return n * ft_factorial(n - 1);
  }
}


void main(void)
{
  int num;
  scanf("%d", &num);

  printf("%d = %d", num, ft_factorial(num)); 
}




