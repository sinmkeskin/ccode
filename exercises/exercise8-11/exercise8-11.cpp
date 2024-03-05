#include <stdio.h>

int main()
{
	int a, b;
	a = 7;

	printf("Get the value:");
	scanf_s("%d", &b);

	if (a < b)
	{
		printf("%d greater than %d .",b,a);

	}

	else
	{
		printf("%d greater than %d.", a, b);

	}

	return(0);

}