#include <stdio.h>

int main()
{
    char choice;

    printf("Meal Plans:\n");
    printf("A - Breakfast, Lunch, and Dinner\n");
    printf("B - Lunch and Dinner only\n");
    printf("C - Dinner only\n");
    printf("Your choice: \n");
    scanf_s("%c", &choice);

    printf("You've opted for ");
    switch (choice)
    {
    case 'A':
        printf("Breakfast, ");
    case 'B':
        printf("Lunch and ");
    case 'C':
        printf("Dinner ");
    default:
        printf("as your meal plan.\n");
    }
    return(0);
}