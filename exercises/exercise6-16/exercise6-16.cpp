#include <stdio.h>

int main()
{
	const int v = 5;

	printf("The value is %d\n", v);
	printf("And %d is the value\n", v);
	printf("It is not %d\n", v + 1);
	printf("And it is not %d\n", v - 1);
	printf("No, the value is %d\n", v);
	return(0);

}