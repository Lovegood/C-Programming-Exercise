#include <stdio.h>
#include <stdlib.h>

int main()
{
    int age;

    printf("������Ա�������䣺");
    scanf("%d",&age);

    if(age>=22&&age<=30){
        printf("��Ա��Ӧ�õ��ε�ְ���ǣ�����ҵ��Ա��\n");
    }else if(age>=31&&age<=45){
        printf("��Ա��Ӧ�õ��ε�ְ���ǣ�������Ա��\n");
    }else if(age>=46&&age<=55){
        printf("��Ա��Ӧ�õ��ε�ְ���ǣ��ֿ����Ա��\n");
    }else if(age>=56){
        printf("��Ա��Ӧ�����ݡ�\n");
    }else{
        printf("�����������顣");
    }

    return 0;
}
