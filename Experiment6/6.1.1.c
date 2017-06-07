#include <stdio.h>

int getDivisor(int,int);
int getMultiple(int,int,int);

int main()
{
    int a,b;
    printf("请输入两整数并以空格分隔：");
    scanf("%d %d",&a,&b);

    int divisor=getDivisor(a,b);
    int multiple=getMultiple(a,b,divisor);

    printf("%d和%d的最大公约数为%d,最小公倍数为%d。\n",a,b,divisor,multiple);

    return 0;
}

int getDivisor(int a,int b){
    if(b==0){
        return a;
    }
    return getDivisor(b,a%b);
}

int getMultiple(int a,int b,int divisor){
    //最小公倍数=两整数的乘积÷最大公约数
    return a*b/divisor;
}
