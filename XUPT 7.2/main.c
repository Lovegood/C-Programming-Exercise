#include <stdio.h>
#define len 10

int main()
{
    float score[len];
    for(int i=0;i<len;i++){
        printf("请输入第%d名学生的成绩:",i+1);
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

    printf("成绩最高这是第%d名同学，他的成绩为%f",index+1,max);

    return 0;
}
