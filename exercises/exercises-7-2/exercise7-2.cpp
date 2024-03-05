#include <stdio.h>

int main()
{
	int c;
	printf("I am waiting for a character: ");
	c = getchar();
	printf("I am waited for the '%d' character. \n", c);
	return(0);

}