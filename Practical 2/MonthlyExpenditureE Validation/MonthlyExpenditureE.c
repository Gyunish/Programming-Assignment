#include <stdio.h>

int main()
{
    float foodExpenses;
    float leisureExpenses;
    float clothesExpenses;
    float travelExpenses;
    float totalSpent=0;

    const int ACCOMMODATION=500;

    printf("Enter Food expenses of the month: ");
    scanf("%f",&foodExpenses);

    while(foodExpenses<0)   //this loops runs as long as the user does not provide a value that is positive
    {
        printf("Invalid input. Enter a postiive value");
           scanf("%f",&foodExpenses);
    }


    printf("Enter Leisure expenses of the month: ");
    scanf("%f",&leisureExpenses);

    while(leisureExpenses<0)   //this loops runs as long as the user does not provide a value that is positive
    {
        printf("Invalid input. Enter a postiive value");
        scanf("%f",&leisureExpenses);
    }


    printf("Enter Clothes expenses of the month: ");
    scanf("%f",&clothesExpenses);

    while(clothesExpenses<0)   //this loops runs as long as the user does not provide a value that is positive
    {
        printf("Invalid input. Enter a postiive value");
        scanf("%f",&clothesExpenses);
    }


    printf("Enter Travel expenses of the month: ");
    scanf("%f",&travelExpenses);

    while(travelExpenses<0)   //this loops runs as long as the user does not provide a value that is positive
    {
        printf("Invalid input. Enter a postiive value");
        scanf("%f",&travelExpenses);
    }


    totalSpent=foodExpenses+leisureExpenses+clothesExpenses+ACCOMMODATION+travelExpenses;

    printf("\nThe total expenditure this month was Rs%.2f\n\n",totalSpent);

    return 0;
}