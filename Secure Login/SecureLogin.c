#include <stdio.h>

int main()
{
    int correctPIN=1234;    //defining a correct pin (can be taken as user input too)
    int inputPIN;
    int attempts=3;      //question asks to give 3 attempts

    while(attempts!=0)     //while loop to check the number of attempts
    {
        printf("Enter PIN: ");
        if(scanf("%d",&inputPIN)!=1)    //making sure that the user input is in integer
        {
            printf("Error: Invalid input, numbers only.\n");
            while (getchar()!='\n');    //clearing the invalid user input
            continue;   //goes back to the start of the loop without incremenet
        }
        if(inputPIN==correctPIN)    //condition for correct pin
        {
            printf("Access Granted\n");
            return 0;
        }
        else
        {
            attempts--;     //decreasing number of attempts
            if(attempts!=0)     //condition if the user still has attempts left
            {
                printf("Wrong PIN. %d attempt(s) left.\n",attempts);
            }
            else    //condition if the user is out of attempts
            {
                printf("Access Denied. Account Locked. \n");
            }
        }
    }
    return 0;
}