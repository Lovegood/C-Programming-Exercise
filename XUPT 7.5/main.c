#include <stdio.h>
#include <stdlib.h>
#define len sizeof(a)/sizeof(a[0])

int main()
{
    //��ʼ����������
    int * a;
    a=(int*)malloc(3*sizeof(int));
    if(a==NULL){
        printf("�ڴ�����ʧ�ܡ�");
        exit(1);
    }
    a[0]=2;
    a[1]=4;
    a[2]=7;

    int input,index;
    printf("���������������������������qֹͣ��:");
    while( scanf("%d",&input)==1 ){
        index=0;
        //���������ڴ�
        p=(int*)realloc(p,(len+1)*sizeof(int));
        if(a==NULL){
            printf("�ڴ�����ʧ�ܡ�");
            exit(1);
        }
        //�������λ��
        for(int i=len-2;i>=0;i++){
            if(a<a[i]){
                ;
            }else{
            }
        }

        printf("���������������������������qֹͣ��:");
    }

    free(a);

    return 0;
}
