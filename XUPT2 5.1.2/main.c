#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j;
    int row,column;
    printf("请输入欲输入的二维数组的行数：");
    scanf("%d",&row);
    printf("请输入欲输入的二维数组的列数：");
    scanf("%d",&column);

    //malloc
    int ** a;
    a=(int**)malloc(column*sizeof(int*));
    if(NULL==a){
        printf("error:内存申请失败");
        exit(0);
    }
    for(i=0;i<row;i++){
        a[i]=(int*)malloc(sizeof(int));
        if(NULL==a[i]){
            printf("error:内存申请失败");
            exit(0);
        }
    }
    //get input
    for(i=0;i<row;i++){
        for(j=0;j<column;j++){
            printf("请输入第%d行，第%d列的数字：",i+1,j+1);
            scanf("%d",a[i][j]);
        }
    }
    //find
    int p_c,isExisted=1;
    int max;
    //查找每行最大，判断是否为该列最小
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
        printf("该二维数组不存在鞍点。\n");
    }else{
        printf("该二维数组的鞍点为%d",a[i][j]);
    }
    //free
    for(i=0;i<row;i++){
        free(a[i]);
    }
    free(a);

    return 0;
}
