#include <stdio.h>

#define MAX 100
#define LEN 80

char text[MAX][LEN];

void main(void) {

	register int t, i, j;

	puts("Insert one line void to exit.");

	for(t= 0; t < MAX; t++) {
		printf("%d: ", t);
		fgets(text[t]);
		if(!*text[t]) break;
	}

	for(i = 0; i < t; i++) {
	for(j = 0; text[i][j]; j++) putchar(text[i][j]);
	putchar('\n');
	}
}
