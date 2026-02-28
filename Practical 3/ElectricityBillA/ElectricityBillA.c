#include<stdio.h>

int main() 
{
    int previousMetre,currentMetre,day,month;

    printf("Enter previous reading, current reading, day, and month: \n");
    if (scanf("%d %d %d %d",&previousMetre,&currentMetre,&day,&month)!=4) 
    {
        printf("Error: Invalid input format\n");
        return 1;
    }

    if (currentMetre<0||currentMetre>9999)
        printf("Error: current meter reading out of range \n");
    
    if (previousMetre>currentMetre)
        printf("Error: previous reading is more than present reading\n");

    if ((currentMetre-previousMetre)>1000)
        printf("Error: electricity used not more than 1000\n");

    if (month<1||month>12)
        printf("Error: month in range 1-12\n");

    return 0;
}