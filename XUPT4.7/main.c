#include <stdio.h>

int main()
{
    int x;

    printf("������һ����������");
    scanf("%d",&x);

    if(x>0&&x<32767){
        int ge=x%10;

        int length=1;
        for(;x>10;length++){
            x/=10;
        }

        printf("������������λ��Ϊ%d����λΪ%d",length,ge);
    }

    return 0;
}
