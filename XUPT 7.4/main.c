#include <stdio.h>
#include <stdlib.h>

int main()
{
    int len;
    printf("请输入数组中元素个数：");
    scanf("%d",&len);

    int * a=(int*)malloc(len*sizeof(int));

    for(int i=0;i<len;i++){
        printf("请输入第%d个元素",i+1);
        scanf("%d",&a[i]);
    }

    printf("数组内全部元素为：\n");
    for(int i=0;i<len;i++){
        printf("%d\t",a[i]);
    }
    printf("\n");

    //change

    printf("调换顺序后的数组元素为：\n");
    for(int i=0;i<len;i++){
        printf("%d\t",a[i]);
    }
    printf("\n");

    free(a);

    return 0;
}
