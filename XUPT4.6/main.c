#include <stdio.h>

int main()
{
    char Operator;
    double num1,num2,result;

    printf("�����������е�����(��+����-����*����/)��");
    scanf("%c",&Operator);
    printf("��������м�����������֣���һ���ո�ָ���");
    scanf("%lf %lf",&num1,&num2);

    switch(Operator){
        case '+':printf("���Ϊ%lf",num1+num2);break;
        case '-':printf("���Ϊ%lf",num1-num2);break;
        case '*':printf("���Ϊ%lf",num1*num2);break;
        case '/':printf("���Ϊ%lf",num1/num2);break;
    }

    return 0;
}
