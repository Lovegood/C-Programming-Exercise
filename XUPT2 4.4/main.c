#include <stdio.h>

int main()
{
    int sum;
    for(int i=1;i<=100;i++){
        sum=0;
        for(int j=1;j<i;j++){//�������Ӳ��Ʊ���
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
