#include <stdio.h>
#include <stdlib.h>

int main()
{
    int len;
    printf("������������Ԫ�ظ�����");
    scanf("%d",&len);

    int * a=(int*)malloc(len*sizeof(int));

    for(int i=0;i<len;i++){
        printf("�������%d��Ԫ��",i+1);
        scanf("%d",&a[i]);
    }

    printf("������ȫ��Ԫ��Ϊ��\n");
    for(int i=0;i<len;i++){
        printf("%d\t",a[i]);
    }
    printf("\n");

    //change

    printf("����˳��������Ԫ��Ϊ��\n");
    for(int i=0;i<len;i++){
        printf("%d\t",a[i]);
    }
    printf("\n");

    free(a);

    return 0;
}
