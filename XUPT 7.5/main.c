#include <stdio.h>
#include <stdlib.h>

int main()
{
    //��ʼ����������
    int * a=(int*)malloc(3*sizeof(int));
    if(a==NULL){
        printf("�ڴ�����ʧ�ܡ�");
        exit(1);
    }
    a[0]=2;
    a[1]=4;
    a[2]=6;

    int cnt=3;

    printf("��ǰ���飺\n");
    for(int i=0;i<cnt;i++){
        printf("%d\t",a[i]);
    }
    printf("\n");

    int input;
    printf("���������������������������qֹͣ��:");
    while( scanf("%d",&input)==1 ){
        //���������ڴ�
        a=(int*)realloc(a,(cnt+1)*sizeof(int));
        if(a==NULL){
            printf("�ڴ�����ʧ�ܡ�");
            exit(1);
        }
        cnt++;
        //�������λ�ò�����
        for(int i=cnt-2;i>=0;i--){
            if(input<a[i]){
                a[i+1]=a[i];
                if(i==0){
                    a[i]=input;

                    printf("��ǰ���飺\n");
                    for(int i=0;i<cnt;i++){
                        printf("%d\t",a[i]);
                    }
                    printf("\n");
                }
            }else{
                a[i+1]=input;

                printf("��ǰ���飺\n");
                for(int i=0;i<cnt;i++){
                    printf("%d\t",a[i]);
                }
                printf("\n");

                break;
            }

        }
        printf("���������������������������qֹͣ��:");
    }

    free(a);

    return 0;
}
