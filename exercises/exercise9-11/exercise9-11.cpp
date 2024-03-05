#include <stdio.h>

int main()
{
	int num;
	char alph;

	for (num = 1; num < 10; num = num + 1)
	{
		for (alph = 'A'; alph <= 'G'; alph = alph + 1)
		{
			printf("%d%c\t", num, alph);
		}
	}

	return(0);
}