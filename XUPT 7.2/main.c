#include <stdio.h>
#define len 10

int main()
{
    float score[len];
    for(int i=0;i<len;i++){
        printf("�������%d��ѧ���ĳɼ�:",i+1);
        scanf("%f",&score[i]);
    }

    float max=score[0];
    int index=0;
    for(int i=1;i<len;i++){
        if(score[i]>max){
            max=score[i];
            index=i;
        }
    }

    printf("�ɼ�������ǵ�%d��ͬѧ�����ĳɼ�Ϊ%f",index+1,max);

    return 0;
}
