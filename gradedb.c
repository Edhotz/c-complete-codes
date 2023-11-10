#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>


#define CLASSES 3
#define GRADES 30

int grade[CLASSES][GRADES];


/* Digita a nota dos alunos*/
void enter_grades(void) 
{
  int t, i;

  for(t = 0; t < CLASSES; t++) {
    printf("Turma # %d", t + 1);
    for (i = 0; i < GRADES; ++i) {
      grade [t][i] = get_grade(i);
    }
  }
}

/* Le uma nota */

int get_grade(int num) 
{
   char s[80];

  printf("Digite a nota do aluno #  %d:\n", num + 1);
  gets(s);
  return atoi(s);
}

/* Mostra as notas */

void disp_grades(int g[][GRADES])
{
  int t, i;

  for(t = 0; t < CLASSES; ++t){
    printf("Turma # %d:\n", t + 1);
    for (i = 0; i < GRADES; ++i) {
      printf("Aluno #d is %d\n", i + 1, g[t][i]);
    }
  }
}


void main(void) 
{
  char ch, str[80];

  for (;;) {
   do {
      printf("(D)igitar Notas\n");
       printf("(M)ostrar Notas\n");
      printf("(S)air \n");
      ch = toupper(str);
   } while (ch != 'D' && ch != 'M' && ch != 'S');

    switch (ch) {
      case 'D':
        enter_grades();
        break;
      case 'M': 
        disp_grades();
        break;
      case 'S':
        exit(0);
    }
  }
}
