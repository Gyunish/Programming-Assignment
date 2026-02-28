#include <stdio.h>

int main() 
{
    int numCustomers;
    int totalUnits=0; 

    printf("Enter the number of customers to process (max 10): ");
    if(scanf("%d",&numCustomers)!=1||numCustomers<1||numCustomers>10)   //making sure user input is an integer
    {
        printf("Error: Invalid number of customers (must be 1-10)\n");
        return 1;
    }

    for(int i=1;i<=numCustomers;i++)
    {
        int previousMetre,currentMetre,day,month;

        printf("\nCustomer %d:\n",i);
        printf("Enter previous reading,current reading,day,and month: \n");

        if(scanf("%d %d %d %d",&previousMetre,&currentMetre,&day,&month)!=4)    //making sure user input is an integer
        {
            printf("Error: Invalid input format\n");
            i--;    //repeating the customer that has invalid input
            while(getchar()!='\n');     //clearing invalid input
            continue;
        }

        // Input validation
        int valid=1;
        if(currentMetre<0||currentMetre>9999)
        {
            printf("Error: current meter reading out of range\n");
            valid=0;
        }
        if(previousMetre>currentMetre)
        {
            printf("Error: previous reading is more than present reading\n");
            valid=0;
        }
        if((currentMetre-previousMetre)>1000)
        {
            printf("Error: electricity used cannot be more than 1000\n");
            valid=0;
        }
        if(month<1||month>12)
        {
            printf("Error: month must be in range 1-12\n");
            valid=0;
        }

        if(!valid)  //if the value of valid is 0 this condition is met
        {
            i--;    //repeating the customer that has invalid input
            continue;
        }

        int unitsUsed=currentMetre-previousMetre;
        totalUnits+=unitsUsed;
        printf("Customer %d used %d units of electricity.\n",i,unitsUsed);
    }

    //Summary of everyone
    printf("\nSummary:\n");
    printf("Total electricity units used by all customers: %d\n",totalUnits);
    printf("Average units per customer: %.2f\n",(float)totalUnits/numCustomers);

    return 0;
}