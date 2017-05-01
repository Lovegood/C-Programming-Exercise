#include <stdio.h>
#include <stdlib.h>
#define len sizeof(a)/sizeof(a[0])

int main()
{
    //初始化有序数列
    int * a;
    a=(int*)malloc(3*sizeof(int));
    if(a==NULL){
        printf("内存申请失败。");
        exit(1);
    }
    a[0]=2;
    a[1]=4;
    a[2]=7;

    int input,index;
    printf("请输入欲插入数组的整数（输入q停止）:");
    while( scanf("%d",&input)==1 ){
        index=0;
        //重新申请内存
        p=(int*)realloc(p,(len+1)*sizeof(int));
        if(a==NULL){
            printf("内存申请失败。");
            exit(1);
        }
        //倒叙查找位置
        for(int i=len-2;i>=0;i++){
            if(a<a[i]){
                ;
            }else{
            }
        }

        printf("请输入欲插入数组的整数（输入q停止）:");
    }

    free(a);

    return 0;
}
