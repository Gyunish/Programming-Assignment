#include<stdio.h>

int main()
{

    int number,sum=0,count=0;
    printf("=== Sum Calculator ===\n");
    while(1)
    {
        printf("Enter number: ");
        if(scanf("%d",&number)!=1)
        {
            printf("Invalid input!\n");
            while(getchar()!='\n');
            continue;
        }
        if(number<0)break;
        sum+=number;
        count++;
        printf("Current sum: %d\n",sum);
    }
    printf("\nFinal sum: %d\nTotal numbers entered: %d\n",sum,count);
    return 0;
}