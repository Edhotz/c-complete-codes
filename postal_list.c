/*
    Programa de lista postal simples
*/

#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

#define SIZE 100

struct list_type
{
    char name[40];
    char street[40];
    char city[30];
    char state[3];
    char zip[10];
} list[SIZE];

int menu(void);
void init_list(void), enter(void);
void display(void), save(void);
void load(void);

void main(void)
{
    char choice;
    init_list();

    for (;;)
    {
        choice = menu();
        switch (choice)
        {
        case 'e':
            enter();
            break;
        case 'd':
            display();
            break;
        case 's':
            save();
            break;
        case 'l':
            load();
            break;
        case 'q':
            exit(0);
        }
    }
}

// Initialize list

void init_list(void)
{
    register int t;

    for (t = 0; t < SIZE; t++)
    {
        *list[t].name = '\0';
    }
}
void enter(void)
{
    register int i;
    for (i = 0; i < SIZE; i++)
    {
        if (!*list[i].name)
        {
            break;
        }
    }

    if (i == SIZE)
    {
        printf("Lista cheia \n");
        return;
    }

    printf("Nome: ");
    fgets(list[i].name, sizeof(list[i].name), stdin);

    printf("Rua: ");
    fgets(list[i].street, sizeof(list[i].street), stdin);

    printf("Cidade: ");
    fgets(list[i].city, sizeof(list[i].city), stdin);

    printf("Estado: ");
    fgets(list[i].state, sizeof(list[i].state), stdin);

    printf("Cep: ");
    fgets(list[i].zip, sizeof(list[i].zip), stdin);
}

void display(void)
{
    register int t;

    for (t = 0; t < SIZE; t++)
    {
        if (*list[t].name)
        {
            printf("%s \n", list[t].name);
            printf("%s \n", list[t].street);
            printf("%s \n", list[t].city);
            printf("%s \n", list[t].state);
            printf("%s \n\n", list[t].zip);
        }
    }
}

void save(void)
{
    FILE *fp;
    register int i;

    if ((fp = fopen("maillist.txt", "wb")) == NULL)
    {
        puts("O Arquivo nao pode ser aberto");
        return;
    }

    for (i = 0; i < SIZE; i++)
    {
        if (*list[i].name)
        {
            if (fwrite(&list[i], sizeof(struct list_type), 1, fp))
            {
                printf("Erro de escrita de arquivo \n");
            }
        }
    }

    fclose(fp);
}

void load(void)
{
    FILE *fp;
    register int i;

    if ((fp = fopen("maillist.txt", "rb")) == NULL)
    {
        printf("Arquivo nao pode ser aberto \n");
        return;
    }

    init_list();
    for (i = 0; i < SIZE; i++)
    {
        if (fread(&list[i], sizeof(struct list_type), 1, fp) != 1)
        {
            if (feof(fp))
            {
                break;
            }
            printf("Erro de leitura no arquivo. \n");
        }

        fclose(fp);
    }
}

int menu(void)
{
    char s[80];

    do
    {
        printf("(I) Inserir \n");
        printf("(V) Visualizar \n");
        printf("(C) Carregar \n");
        printf("(S) Salvar \n");
        printf("(T) Terminar \n");
        printf("Escolha:  \n");
        fgets(s, sizeof(s), stdin);
    } while (!strchr("ivcst", tolower(*s)));

    return tolower(*s);
}