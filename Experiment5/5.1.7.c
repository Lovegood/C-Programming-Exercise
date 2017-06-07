#include <stdio.h>
/**
  * 0 00-39
  * 1 40-49
  * 2 50-59
  * 3 60-69
  * 4 70-79
  * 5 80-89
  * 6 90-100
  */
int main()
{
    int cnt[7]={0};
    for(int i=0;i<50;i++){
        int t;
        re:printf("请输入第%d名同学的成绩：",i+1);
        scanf("%d",&t);
        if(t<0||t>100){
            printf("输入有误，请检查!\n");
            goto re;
        }else if(t<40){
            cnt[0]++;
        }else if(t<50){
            cnt[1]++;
        }else if(t<60){
            cnt[2]++;
        }else if(t<70){
            cnt[3]++;
        }else if(t<80){
            cnt[4]++;
        }else if(t<90){
            cnt[5]++;
        }else{
            cnt[6]++;
        }
    }
    printf("\n00~39\t%d\n",cnt[0]);
    for(int i=1;i<7;i++){
        printf("%d~%d\t%d\n",30+i*10,39+i*10,cnt[i]);
    }

    return 0;
}
