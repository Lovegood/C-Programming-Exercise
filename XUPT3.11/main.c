#include <stdio.h>
#include <math.h>

int main()
{
    double a,b,c,s,area;

    printf("���������������߳��Ȳ���һ���ո�ָ���\n");
    scanf("%lf %lf %lf",&a,&b,&c);

    s=(a+b+c)/2;
    area=sqrt(s*(s-a)*(s-b)*(s-c));

    printf("���������Ϊ%lf",area);

    return 0;
}
