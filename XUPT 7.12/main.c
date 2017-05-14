#include <stdio.h>
#include <stdlib.h>
#define max 101

int main(){
    //input
    int size;
    printf("每行字符数不超高100，请输入欲输入的行数：");
    scanf("%d",&size);

    char a[size][max];
    for(int i=0;i<size;i++){
        printf("请输入第%d行内容：",i+1);
        scanf("%s",&a[i]);
    }

    printf("当前字符串列表内容为：\n");
    for(int i=0;i<size;i++){
        printf("%s\n",a[i]);
    }

    //list
    char t[max];
    for(int i=0;i<size;i++){
        for(int j=0;j<size-i-1;j++){
            if( strcmp(a[j],a[j+1])>0 ){
                strcpy(t,a[j]);
                strcpy(a[j],a[j+1]);
                strcpy(a[j+1],t);
            }
        }
    }

    //output
    printf("排序后字符串列表内容为：\n");
    for(int i=0;i<size;i++){
        printf("%s\n",a[i]);
    }

    return 0;
}
