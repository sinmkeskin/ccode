#include <stdio.h>
int main()
{
	const int secret = 19;
	int guess;

	printf("Can you guess secret number: ");
	scanf_s("%d", &guess);
	if (guess == secret)
	{
		printf("YES IT'S CORRECT!!");
		return(0);

	}
	if (guess != secret)
	{
		printf("NOT CORRECT");
		return(1);

	}
	
}