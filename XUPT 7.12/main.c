#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define max 101

//�ö�ά�ַ������ÿ�д洢����������ַ���������Щ�ַ������ֵ�˳���������򣬰������Ľ�������

int main()
{
    char ** a=(char**)malloc(sizeof(char*));
    //����
    printf("�������ʾ����ÿ�����ݣ�ÿ�����ݲ�����100���ַ�����qֹͣ���롣\n");
    int line=0;
    for(;;line++){
        printf("�������%d�����ݣ�",line+1);
        scanf("%s",&a[line]);
        if(strcmp(a[line],"q")==0){
            free(a[line]);
            break;
        }
        a=(char**)realloc(a,(line+1)*sizeof(char*));
        a[line]=(char*)malloc(max*sizeof(char));
    }

    printf("�ַ����б�\n");
    for(int i=0;i<line;i++){
        printf("%s\n",a[i]);
    }
    //����

    //�ͷ�
    for(int i=0;i<line;i--){
        free(a[i]);
    }
    free(a);

    return 0;
}
