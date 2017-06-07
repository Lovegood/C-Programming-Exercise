#include <stdio.h>
#include <math.h>

int main()
{
    int isPrime,count=0,max;

    for(int num=3;num<100;num++){
        isPrime=1;
        max=(int)sqrt(num)+1;
        for(int i=2;i<=max;i++){
            if(num%i==0){
                isPrime=0;
            }
            if(isPrime==0){
                break;
            }
        }
        if(isPrime==1){
            count++;
            printf("%2d ",num);
            if(count==10){
                printf("\n");
                count=0;
            }
        }
    }

    return 0;
}
