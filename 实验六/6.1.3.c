#include <stdio.h>
#define studentNumber 50

int cnt(float*,float*,int);

int main()
{
    float s[studentNumber];
    for(int i=0;i<studentNumber;i++){
        printf("请输入第%d名学生的成绩：",i+1);
        scanf("%f",&s[i]);
    }
    printf("高于平均分的学生的人数为%d",cnt(s,s+studentNumber,studentNumber));

    return 0;
}

int cnt(float *start,float *end,int size){
    int result=0;
    float average,sum=0.0;
    for(int i=0;i<size;i++){
        sum+=*(start+i);
    }
    average=sum/(float)size;
    for(;start<end;start++){
        if(*(start)-average>0.000001){
            result++;
        }
    }
    return result;
}
