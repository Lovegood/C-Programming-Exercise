#include <stdio.h>

int main()
{
    int UserInput,ge,shi,bai;

    printf("������һ������:");
    scanf("%d",&UserInput);

    ge=UserInput%10;
    UserInput/=10;
    shi=UserInput%10;
    UserInput/=10;
    bai=UserInput%10;

    printf("������������ĸ�λ��%d��ʮλ��%d����λ��%d��",ge,shi,bai);

    return 0;
}
