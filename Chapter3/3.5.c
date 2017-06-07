#include <stdio.h>

int main()
{
    double num1,num2,num3,num4,result;

    printf("Please enter four numbers and separated by spaces.\n");
    scanf("%lf %lf %lf %lf",&num1,&num2,&num3,&num4);

    result=(num1+num2+num3+num4)/4.0;

    printf("The average of the four numbers is %lf",result);

    return 0;
}
