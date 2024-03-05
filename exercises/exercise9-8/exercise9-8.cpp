#include <stdio.h>

int main()
{
	char alphabeth;

	for (alphabeth = 'A'; alphabeth <= 'Z'; alphabeth = alphabeth + 1)
	{
		printf("%c\n", alphabeth);
	}

	return(0);
}