#include <stdio.h>

int main()
{
	int first, second;

	printf("Input the first value: ");
	scanf_s("%d", &first);

	printf("Input the second value:");
	scanf_s("%d", &second);

	puts("Evaluating...");
	if (first < second)
	{
		printf("%d is less than %d\n", first, second);

	}
	if (first > second)
	{
		printf("%d is greater than %d\n", first, second);

	}
	if (first == second)
	{
		printf("%d is equal to second %d\n", first, second);

	}


	return(0);
}