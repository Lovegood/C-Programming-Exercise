#include <stdio.h>
#include <stdlib.h>
#define max 101

int main(){
    //input
    int size;
    printf("ÿ���ַ���������100���������������������");
    scanf("%d",&size);

    char a[size][max];
    for(int i=0;i<size;i++){
        printf("�������%d�����ݣ�",i+1);
        scanf("%s",&a[i]);
    }

    printf("��ǰ�ַ����б�����Ϊ��\n");
    for(int i=0;i<size;i++){
        printf("%s\n",a[i]);
    }

    //list
    char t[max];
    for(int i=0;i<size;i++){
        for(int j=0;j<size-i-1;j++){
            if( strcmp(a[j],a[j+1])>0 ){
                strcpy(t,a[j]);
                strcpy(a[j],a[j+1]);
                strcpy(a[j+1],t);
            }
        }
    }

    //output
    printf("������ַ����б�����Ϊ��\n");
    for(int i=0;i<size;i++){
        printf("%s\n",a[i]);
    }

    return 0;
}
