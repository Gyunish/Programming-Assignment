#include <stdio.h>

int main()
{
    double currentPopulation=312032486;     //double is used as it can store more decimal points than float
    int seconds=365*24*60*60;               //365 days is to be assumed according to the question and it can be converted into seconds

    double birthsPerYear=seconds/7.0;
    double deathsPerYear=seconds/13.0;
    double immigrantsPerYear=seconds/45.0;

    double populationChange=birthsPerYear-deathsPerYear+immigrantsPerYear;

    printf("The current population is: %.0f",currentPopulation);
    for(int i=1; i<=5; i++)
    {
        currentPopulation += populationChange;
        printf("\nThe population change in %d year is: %.0f",i,currentPopulation);
    }
    return 0;
}