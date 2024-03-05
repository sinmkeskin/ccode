#include <stdio.h>

int main()
{
	int fibo, nacci;
	fibo = 0;
	nacci = 1;

	do
	{
		printf("%d\n", fibo);
		fibo = fibo + nacci;
		printf("%d\n", nacci);
		nacci = nacci + fibo;
	} while (nacci < 5000);

	return(0);
}