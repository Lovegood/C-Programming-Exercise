#include <stdio.h>

int main()
{
    float Fah,Cel;

    printf("Please enter the temperature in Fahrenheit:");
    scanf("%f",&Fah);

    Cel=5.0/9.0*(Fah-32);

    printf("The temperature in Celsius is %.2f.\n",Cel);

    return 0;
}
