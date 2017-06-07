#include <stdio.h>

int main()
{
    int sum;
    for(int i=1;i<=100;i++){
        sum=0;
        for(int j=1;j<i;j++){//完数因子不计本身
            if(i%j==0){
                sum+=j;
            }
        }
        if(sum==i){
            printf("%d ",i);
        }
    }
    return 0;
}
