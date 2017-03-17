#include <stdio.h>
#include <stdlib.h>

int main()
{
    double a,b,c,maximum;

    printf("Please enter three numbers and separated them by spaces.\n");
    scanf("%lf %lf %lf",&a,&b,&c);

    if(a>b){
        if(a>c){
            maximum=a;
        }else{
            maximum=c;
        }
    }else{
        if(b>c){
            maximum=b;
        }else{
            maximum=c;
        }
    }

    printf("The maximum of the three numbers is %lf.\n",maximum);

    return 0;
}
