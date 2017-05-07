#include <stdio.h>

int main()
{
    int input[5],wei[4];//wei:0-千,1-百,2-十,3-个

    for(int i=0;i<5;i++){
        scanf("%d",&input[i]);
    }

    for(int i=0;i<5;i++){
        wei[0]=input[i];
        for(int j=3;j>0;j--){
            wei[j]=wei[0]%10;
            wei[0]/=10;
        }
        for(int j=0;j<4;j++){
            wei[j]+=5;
            wei[j]%=10;
        }
        for(int j=3;j>=0;j--){
            printf("%d",wei[j]);
        }
        printf("\n");
    }

    return 0;
}
