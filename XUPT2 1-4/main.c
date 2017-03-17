#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,s;

    printf("Please enter the rectangular long and wide and separated them by spaces.\n");
    scanf("%d %d",&a,&b);

    s=a*b;

    printf("The rectangular acreage is %d",s);

    return 0;
}
