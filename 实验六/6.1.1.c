#include <stdio.h>

int getDivisor(int,int);
int getMultiple(int,int,int);

int main()
{
    int a,b;
    printf("���������������Կո�ָ���");
    scanf("%d %d",&a,&b);

    int divisor=getDivisor(a,b);
    int multiple=getMultiple(a,b,divisor);

    printf("%d��%d�����Լ��Ϊ%d,��С������Ϊ%d��\n",a,b,divisor,multiple);

    return 0;
}

int getDivisor(int a,int b){
    if(b==0){
        return a;
    }
    return getDivisor(b,a%b);
}

int getMultiple(int a,int b,int divisor){
    //��С������=�������ĳ˻������Լ��
    return a*b/divisor;
}
