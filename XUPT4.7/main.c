#include <stdio.h>

int main()
{
    int x;

    printf("请输入一个正整数：");
    scanf("%d",&x);

    if(x>0&&x<32767){
        int ge=x%10;

        int length=1;
        for(;x>10;length++){
            x/=10;
        }

        printf("您输入正整数位数为%d，个位为%d",length,ge);
    }

    return 0;
}
