#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j;
    int row,column;
    printf("������������Ķ�ά�����������");
    scanf("%d",&row);
    printf("������������Ķ�ά�����������");
    scanf("%d",&column);

    //malloc
    int ** a;
    a=(int**)malloc(column*sizeof(int*));
    if(NULL==a){
        printf("error:�ڴ�����ʧ��");
        exit(0);
    }
    for(i=0;i<row;i++){
        a[i]=(int*)malloc(sizeof(int));
        if(NULL==a[i]){
            printf("error:�ڴ�����ʧ��");
            exit(0);
        }
    }
    //get input
    for(i=0;i<row;i++){
        for(j=0;j<column;j++){
            printf("�������%d�У���%d�е����֣�",i+1,j+1);
            scanf("%d",a[i][j]);
        }
    }
    //find
    int p_c,isExisted=1;
    int max;
    //����ÿ������ж��Ƿ�Ϊ������С
    for(i=0;i<row;i++){
        max=a[i][0];
        p_c=0;
        for(j=1;j<column;j++){
            if(a[i][j]>max){
                max=a[i][j];
                p_c=j;
            }
        }
        for(int cnt=0;cnt<row;cnt++){
            if(a[i][j]>=a[cnt][j]){
                isExisted=0;
                break;
            }
        }
    }
    if(0==isExisted){
        printf("�ö�ά���鲻���ڰ��㡣\n");
    }else{
        printf("�ö�ά����İ���Ϊ%d",a[i][j]);
    }
    //free
    for(i=0;i<row;i++){
        free(a[i]);
    }
    free(a);

    return 0;
}
