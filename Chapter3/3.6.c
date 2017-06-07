#include <stdio.h>

int main()
{
    int UserInput,ge,shi,bai;

    printf("请输入一个整数:");
    scanf("%d",&UserInput);

    ge=UserInput%10;
    UserInput/=10;
    shi=UserInput%10;
    UserInput/=10;
    bai=UserInput%10;

    printf("您输入的整数的个位是%d，十位是%d，百位是%d。",ge,shi,bai);

    return 0;
}
