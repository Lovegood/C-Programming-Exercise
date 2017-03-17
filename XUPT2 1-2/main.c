#include <stdio.h>
#include <stdlib.h>

int main()
{
    double a,b,h,s;

    printf("Please enter the trapezoidal upper, bottom and high with space separating them.\n");
    scanf("%lf %lf %lf",&a,&b,&h);

    s=(a+b)*h/2.0;

    printf("The trapezoidal acreage is %lf",s);

    return 0;
}
