#include <stdio.h>
#include <string.h>

struct aluno {
    char nome[20];
    int matricula;
    float nota;
};

void ft_display_struct(struct aluno *a);

void main(void) 
{
    struct aluno al1;

    strcpy(al1.nome, "Joao da Silva");
    al1.matricula = 123456;
    al1.nota = 9.5;

    ft_display_struct(&al1);
}

void ft_display_struct(struct aluno *a)
{
    printf("Nome: %s \n", a -> nome);
    printf("Matricula: %d \n", a -> matricula);
    printf("Nome: %.2f \n", a -> nota);
}

