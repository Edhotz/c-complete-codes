#include <stdio.h>
#include <string.h>

void pad(char *s, int length);
void main(void) 
{
	char str[80];
	strcpy(str, "Its is a test");
	pad(str, 40);
	printf("%ld", strlen(str));
}

void pad(char *s, int length)
{
	int l;
	l = strlen(s);

	while(1 < length){
	s[1] = ' ';

	l++;	
	}
	s[l] = '\0';
}
