#include <stdio.h>
#include <math.h>

double get(double,double,double,double);

int main()
{
    double a,b,c,d;
    printf("请输入四个系数并以空格分隔：\n");
    scanf("%lf %lf %lf %lf",&a,&b,&c,&d);
    printf("结果为%lf",get(a,b,c,d));

    return 0;
}

double get(double a,double b,double c,double d){
    //牛顿迭代法求根 http://blog.itpub.net/14139916/viewspace-496165/
    double x=1,x0;
    do
    {
        x0=x;
        x=x0-(((a*x+b)*x+c)*x+d)/((3*a*x+2*b)*x+c);
    }
    while(fabs(x-x0)>=1e-5);
    return x;
}
