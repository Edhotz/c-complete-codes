#include <stdio.h>
#include <conio.h>
#include <string.h>

void 	converge(int line, char *message);

void 	main(void){
	converge(10, "Teste de converge");
}

void 	converge(int line, char *message) 
{
	int i, j;

	for(i = 1, j = strlen(message); i < j;  i++, j--) {
		gotoxy(i, line); printf("%c", message[i-1]);
		gotoxy(j, line); printf("%c", message[j-1]);
	}
}

