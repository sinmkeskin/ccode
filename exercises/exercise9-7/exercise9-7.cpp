#include <stdio.h>

int main()
{
	int backwards;

	for (backwards = 25; backwards = backwards - 1; backwards >= 0)
	{
		printf("%d\n", backwards);
	}

	return(0);
}