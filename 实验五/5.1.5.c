#include <stdio.h>
#include <string.h>
#define max 101

int main()
{
    char input[max];
    printf("������һ��Ӣ�ľ��ӣ��������100���ַ���\n");
    gets(input);

    char *start;
    while( (start=strrchr(input,32))!=NULL ){
        int end=strlen(input);
        int i=1;
        for(;'\0'!=*(start+i);i++){
            printf("%c",*(start+i));
        }
        printf(" ");
        *(start)='\0';
    }
    printf("%s",input);

    return 0;
}
