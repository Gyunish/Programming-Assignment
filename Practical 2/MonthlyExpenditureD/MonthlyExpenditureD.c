#include <stdio.h>

int main()
{
    float foodExpenses;
    float leisureExpenses;
    float clothesExpenses;
    float accommodationExpenses;
    float travelExpenses;
    float totalSpent=0;

    printf("Enter Food expenses of the month: ");
    scanf("%f",&foodExpenses);
    printf("Enter Leisure expenses of the month: ");
    scanf("%f",&leisureExpenses);
    printf("Enter Clothes expenses of the month: ");
    scanf("%f",&clothesExpenses);
    printf("Enter Accommodation expenses of the month: ");
    scanf("%f",&accommodationExpenses);
    printf("Enter Travel expenses of the month: ");
    scanf("%f",&travelExpenses);

    totalSpent=foodExpenses+leisureExpenses+clothesExpenses+accommodationExpenses+travelExpenses;

    printf("\nThe total expenditure this month was Rs%.2f\n\n",totalSpent);
    
    return 0;
}