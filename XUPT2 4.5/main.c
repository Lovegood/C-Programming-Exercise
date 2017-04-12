#include <stdio.h>

int main()
{
    int min,max,yu;
    printf("请输入两个正整数，并以空格分隔它们：\n");
    scanf("%d %d",&min,&max);
    if(min>max){
        int t=min;
        min=max;
        max=t;
    }
    //辗转相除法
    while((yu=max%min)!=0){
        max=min;
        min=(yu>min)?min:yu;
    }
    printf("最大公约数为%d",min);

    return 0;
}
