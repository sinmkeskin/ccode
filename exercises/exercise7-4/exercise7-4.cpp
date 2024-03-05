#include <stdio.h>

int main()
{
	int a, b, c;
	printf("I am waiting a character: ");
	a = getc(stdin);
	b = getc(stdin);
	c = getc(stdin);
	printf("The three characters are '%c', '%c' and '%c'\n",a, b, c);
	return(0);

}