#include <stdio.h>
#include <string.h>
#define len 51

void delChar(char*,char*,char);

int main(){
    char str[len];
    char c;
    printf("请输入字符串，不超过50个字符：");
    scanf("%s",&str);
    printf("请输入欲删除的字符：");
    scanf("%c",&c);
    delChar(str,str+strlen(str),c);
    printf("删除后的字符串为：%s",&str);
    return 0;
}

