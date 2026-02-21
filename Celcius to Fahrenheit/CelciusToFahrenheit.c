#include <stdio.h>

int main()
{
    double celsius;
    double fahrenheit;

    printf("Enter the temperature in celsius: ");
    scanf("%lf",&celsius);

    fahrenheit=(9.0/5)*celsius+32;

    printf("\nThe temperature in fahrenheit is %.2fF",fahrenheit);
}