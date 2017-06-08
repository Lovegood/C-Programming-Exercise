#include <stdio.h>
#include "ab.h"

int main()
{
    int a,b;
    printf("请输入a b的值，并以空格分隔：");
    scanf("%d %d",&a,&b);
    printf("ab=%d",calAB(a,b));
    return 0;
}
