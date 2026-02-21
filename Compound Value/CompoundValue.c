#include <stdio.h>

int main()
{
    double principal;
    double total=0;
    double interestRate=0.05/12;

    printf("Enter the monthly saving amount: ");
    scanf("%lf",&principal);

    for(int i=1; i<=6; i++)
    {
        total=(total+principal)*(1+interestRate);
    }

    printf("After 6 months, the account has a total of Rs%f\n",total);
    
    return 0;
}