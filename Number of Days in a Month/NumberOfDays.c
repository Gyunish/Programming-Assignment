#include <stdio.h>

int main()
{
    int year,month;
    printf("Enter the year and month");
    if(scanf("%d",&year)!=1)   //making sure that the user input is in integer
    {
        printf("\nInvalid Input");
        return 1;
    }
    printf("Enter the year and month");
    if(scanf("%d",&month)!=1)   //making sure that the user input is in integer
    {
        printf("\nInvalid Input");
        return 1;
    }
    switch(month)
    {
        case 1:
            printf("The month of January of %d contains 31 days",year);
            break;
        case 2:
            if ((year%4==0&&year%100!=0)||(year%400==0))    //feburary can contain 28 or 29 days which depends on if the year is a leap year or not.
            {                                               //a leap occurs every 4 years, for a year to be a leap year, it must be perfectly divisible by 4 but not 100 or must be perfectly divisble by 400.
                printf("The month of Feburary of %d contains 29 days as it is a leap year", year);
            } 
            else 
            {
                printf("The month of Feburary of %d contains 28 days as it is not a leap year", year);
            }
            break;
        case 3:
            printf("The month of March of %d contains 31 days",year);
            break;
        case 4:
            printf("The month of April of %d contains 30 days",year);
            break;
        case 5:
            printf("The month of May of %d contains 31 days",year);
            break;
        case 6:
            printf("The month of June of %d contains 30 days",year);
            break;
        case 7:
            printf("The month of July of %d contains 31 days",year);
            break;
        case 8:
            printf("The month of August of %d contains 31 days",year);
            break;
        case 9:
            printf("The month of September of %d contains 30 days",year);
            break;
        case 10:
            printf("The month of October of %d contains 31 days",year);
            break;
        case 11:
            printf("The month of November of %d contains 30 days",year);
            break;
        case 12:
            printf("The month of December of %d contains 31 days",year);
            break;

    }
    return 0;
}