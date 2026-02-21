#include <stdio.h>

int main()
{
    float foodExpenses=300.0;
    float leisureExpenses=100.0;
    float clothesExpenses=50.0;
    float totalSpent;

    totalSpent=foodExpenses+leisureExpenses+clothesExpenses;

    printf("The total expenditure this month was $%.2f\n\n",totalSpent);
    
    return 0;
}