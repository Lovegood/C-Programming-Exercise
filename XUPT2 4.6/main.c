#include <stdio.h>

int main()
{
    for(int n=1;n<=36;n++){
        int num[7]={n};
        for(int count=1;count<8;count++){
            num[count]=num[count-1]+count;
        }
        int sum=0;
        for(int i=0;i<7;i++){
            sum+=num[i];
        }
        if(sum==105){
            for(int i=0;i<7;i++){
                printf("%d ",num[i]);
            }
        }
    }

    return 0;
}
