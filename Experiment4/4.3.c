#include <stdio.h>
#include <math.h>

int main()
{
    int num[3];
    for(int i=100;i<=500;i++){
        int cpy=i;
        for(int j=0;j<3;j++){
            num[j]=cpy%10;
            cpy/=10;
        }
        if(i==pow(num[0],3)+pow(num[1],3)+pow(num[2],3)){
            printf("%d ",i);
        }
    }
    return 0;
}
