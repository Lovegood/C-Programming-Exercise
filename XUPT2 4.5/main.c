#include <stdio.h>

int main()
{
    int min,max,yu;
    printf("���������������������Կո�ָ����ǣ�\n");
    scanf("%d %d",&min,&max);
    if(min>max){
        int t=min;
        min=max;
        max=t;
    }
    //շת�����
    while((yu=max%min)!=0){
        max=min;
        min=(yu>min)?min:yu;
    }
    printf("���Լ��Ϊ%d",min);

    return 0;
}
