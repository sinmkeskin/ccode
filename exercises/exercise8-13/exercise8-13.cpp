#include <stdio.h>

int main()
{
	int first, second;

	printf("Get the first value:");
	scanf_s("%d", &first);

	printf("Get the second value:");
	scanf_s("%d", &second);

	if (first < second)
	{
		printf("%d greater than %d.", second, first);
	}

	else
	{
		printf("%d greater than %.", first, second);
	}

	return(0);

}