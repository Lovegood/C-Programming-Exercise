#include <stdio.h>
#include <stdlib.h>

int main()
{
    //初始化有序数列
    int * a=(int*)malloc(3*sizeof(int));
    if(a==NULL){
        printf("内存申请失败。");
        exit(1);
    }
    a[0]=2;
    a[1]=4;
    a[2]=6;

    int cnt=3;

    printf("当前数组：\n");
    for(int i=0;i<cnt;i++){
        printf("%d\t",a[i]);
    }
    printf("\n");

    int input;
    printf("请输入欲插入数组的整数（输入q停止）:");
    while( scanf("%d",&input)==1 ){
        //重新申请内存
        a=(int*)realloc(a,(cnt+1)*sizeof(int));
        if(a==NULL){
            printf("内存申请失败。");
            exit(1);
        }
        cnt++;
        //倒叙查找位置并插入
        for(int i=cnt-2;i>=0;i--){
            if(input<a[i]){
                a[i+1]=a[i];
                if(i==0){
                    a[i]=input;

                    printf("当前数组：\n");
                    for(int i=0;i<cnt;i++){
                        printf("%d\t",a[i]);
                    }
                    printf("\n");
                }
            }else{
                a[i+1]=input;

                printf("当前数组：\n");
                for(int i=0;i<cnt;i++){
                    printf("%d\t",a[i]);
                }
                printf("\n");

                break;
            }

        }
        printf("请输入欲插入数组的整数（输入q停止）:");
    }

    free(a);

    return 0;
}
