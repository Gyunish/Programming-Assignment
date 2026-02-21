#include <stdio.h>

int main()
{
    float foodExpenses=15000.0;
    float leisureExpenses=5000.0;
    float clothesExpenses=5000.0;
    float accommodationExpenses=5000.0;
    float travelExpenses=10000.0;
    float totalSpent;

    totalSpent=foodExpenses+leisureExpenses+clothesExpenses+accommodationExpenses+travelExpenses;

    printf("The total expenditure this month was Rs%.2f\n\n",totalSpent);
    
    return 0;
}