#include <stdio.h>

int main()
{
    int month,i,result=1,pair[3];//pair[0]-前两个月,pair[1]-前一个月,pair[2]-当月(=pair[0]+pair[1])

    scanf("%d",&month);

    if(month<3){
        result=1;
    }else{
        pair[0]=1;
        pair[1]=1;
        for(i=3;i<=month;i++){//第i月
            pair[2]=pair[0]+pair[1];
            pair[0]=pair[1];
            pair[1]=pair[2];
        }
        result=pair[2];
    }

    printf("%d",result);

    return 0;
}
