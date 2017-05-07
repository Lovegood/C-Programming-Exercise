#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define max 101

//用二维字符数组的每行存储键盘输入的字符串，将这些字符串按字典顺序升序排序，按排序后的结果输出。

int main()
{
    char ** a=(char**)malloc(sizeof(char*));
    //输入
    printf("请根据提示输入每行内容，每行内容不超过100个字符，按q停止输入。\n");
    int line=0;
    for(;;line++){
        printf("请输入第%d行内容：",line+1);
        scanf("%s",&a[line]);
        if(strcmp(a[line],"q")==0){
            free(a[line]);
            break;
        }
        a=(char**)realloc(a,(line+1)*sizeof(char*));
        a[line]=(char*)malloc(max*sizeof(char));
    }

    printf("字符串列表：\n");
    for(int i=0;i<line;i++){
        printf("%s\n",a[i]);
    }
    //排序

    //释放
    for(int i=0;i<line;i--){
        free(a[i]);
    }
    free(a);

    return 0;
}
