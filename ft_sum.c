#include <stdio.h>

float ft_sum();
float first, second;

void main(void)
{
  first = 123.23;
  second = 99.01;

  printf("%f\n", ft_sum());
}

float ft_sum()
{
  return first + second;
}
