#include <stdio.h>
#include <stdlib.h>

int main()
{
    int len;
    printf("������������Ԫ�ظ�����");
    scanf("%d",&len);

    int * a=(int*)malloc(len*sizeof(int));
    if(a==NULL){
        printf("�ڴ�����ʧ�ܡ�\n");
        exit(1);
    }

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
    int t;
    if(len%2==0){//ż��
        for(int i=0;i<=len/2;i++){
            t=a[i];
            a[i]=a[len-1-i];
            a[len-1-i]=t;
        }
    }else{//����
        for(int i=0;i<(len+1)/2;i++){
            t=a[i];
            a[i]=a[len-1-i];
            a[len-1-i]=t;
        }
    }

    printf("����˳��������Ԫ��Ϊ��\n");
    for(int i=0;i<len;i++){
        printf("%d\t",a[i]);
    }
    printf("\n");

    free(a);

    return 0;
}
