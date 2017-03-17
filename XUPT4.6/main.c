#include <stdio.h>

int main()
{
    char Operator;
    double num1,num2,result;

    printf("请输入欲进行的运算(加+，减-，乘*，除/)：");
    scanf("%c",&Operator);
    printf("请输入进行计算的两个数字，以一个空格分隔：");
    scanf("%lf %lf",&num1,&num2);

    switch(Operator){
        case '+':printf("结果为%lf",num1+num2);break;
        case '-':printf("结果为%lf",num1-num2);break;
        case '*':printf("结果为%lf",num1*num2);break;
        case '/':printf("结果为%lf",num1/num2);break;
    }

    return 0;
}
