#include <stdio.h>


int soma(int a, int b) {
  return a + b;
}

int main(int argc, char *argv[])
{
 int (*ponteiroFuncao)(int, int);
  ponteiroFuncao = soma;

  int resultado = ponteiroFuncao(5, 3);

  printf("Resultado: %d\n", resultado);

  return 0;
}
