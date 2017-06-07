#include <stdio.h>

void sortBigToSmall(float*,float*,int);
float getFinalScore(float*,float*,int);

int main()
{
    int m,n;//mѡ�� n��ί
    printf("������ѡ������");
    scanf("%d",&m);
    printf("��������ί����");
    scanf("%d",&n);
    float s[n],average[m];

    for(int contestant=0;contestant<m;contestant++){
        for(int judge=0;judge<n;judge++){
            printf("�������%d��ѡ�ֵĵ�%d����ί�Ĵ�֣�",contestant+1,judge+1);
            scanf("%f",&s[judge]);
        }
        sortBigToSmall(s,s+n,n);
        average[contestant]=getFinalScore(s,s+n,n);
    }
    sortBigToSmall(average,average+m,m);
    printf("���ճɼ���\n");
    for(int i=0;i<m;i++){
        printf("%f\t",average[i]);
    }

    return 0;
}

float getFinalScore(float *start,float *end,int cnt){
    float sum=0.0;
    for(start++;start<end-1;start++){
        sum+=*start;
    }
    return sum/(float)cnt;
}

void sortBigToSmall(float *start,float *end,int size){
    float t;
    int change=1;
    for(int i=0;i<size&&change;i++){
        change=0;
        for(int j=0;j<size-i-1;j++){
            if(*(start+j)<*(start+j+1)){
                change=1;
                t=*(start+j);
                *(start+j)=*(start+j+1);
                *(start+j+1)=t;
            }
        }
    }
}
