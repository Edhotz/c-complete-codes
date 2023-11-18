#include <stdio.h>
#include <string.h>


struct Pessoa {
  char nome[50];
  int idade;
  float altura;
};


int main() 
{
  struct Pessoa pessoa1;

  strcpy(pessoa1.nome, "Maria");

  pessoa1.idade = 23;
  pessoa1.altura = 1.78;

  printf("Nome %s \n", pessoa1.nome);
  printf("Idade %d \n", pessoa1.idade);
  printf("Altura %0.2f \n ", pessoa1.altura);

  return 0;
}
