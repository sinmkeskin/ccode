#include <stdio.h>

int main()
{
    char yorn;

    printf("Do you want to continue? (D/Y)\n");

    scanf_s("%c", &yorn);

    if (yorn == 'Y' || yorn == 'y')
    {
        printf("Continuing...");
    }

    else if (yorn == 'D' || yorn == 'd')
    {
        printf("Stopping now.");
    }

    else
    {
        printf("You didn't write D or Y.");
    }
     
    return(0);
}