#include <stdio.h>

int main()
{
    int day,futureDay;
    printf("Enter from 0-6 representing each day of the week: ");
    if(scanf("%d",&day)!=1)     //making sure that the user input is in integer
    {
        printf("\nInvalid Input");
        return 1;
    }

    switch(day)
    {
        case 0:
            printf("\nToday is Sunday");
            break;
        case 1:
            printf("\nToday is Monday");
            break;
        case 2:
            printf("\nToday is Tuesday");
            break;
        case 3:
            printf("\nToday is Wednesday");
            break;
        case 4:
            printf("\nToday is Thursday");
            break;
        case 5:
            printf("\nToday is Friday");
            break;
        case 6:
            printf("\nToday is Saturday");
            break;
        default:
            printf("\nInvalid Input");
    }

    printf("\nEnter number of days after today");
    if(scanf("%d",&futureDay)!=1)   //taking input for a future day
    {
        printf("\nInvalid Input");
        return 1;
    }
    day=day+futureDay;      //to calculate the day after certain number of days, both inputs has to be added and divided by 7
    day=day%7;              //the remainder is then passed through the same switch case as above to find the future day
    switch(day)
    {
    case 0:
        printf("\nAfter %d days it will be Sunday",futureDay);
        break;
    case 1:
        printf("\nAfter %d days it will be Monday",futureDay);
        break;
    case 2:
        printf("\nAfter %d days it will be Tuesday",futureDay);
        break;
    case 3:
        printf("\nAfter %d days it will be Wednesday",futureDay);
        break;
    case 4:
        printf("\nAfter %d days it will be Thursday",futureDay);
        break;
    case 5:
        printf("\nAfter %d days it will be Friday",futureDay);
        break;
    case 6:
        printf("\nAfter %d days it will be Saturday",futureDay);
        break;
    }
return 0;
}