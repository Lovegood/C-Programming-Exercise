#include <stdio.h>

int main()
{
    float h,n,mile,height;

    scanf("%f",&h);
    scanf("%f",&n);

    mile=h;
    height=h/2;
    for(int i=2;i<=n;i++){
        mile+=height*2;
        height/=2;
    }

    printf("%.2f\n%.2f",mile,height);

    return 0;
}
