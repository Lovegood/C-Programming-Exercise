#include <stdio.h>
#include <stdbool.h>

int main()
{
    int UserInput;

    printf("������һ��������");
    scanf("%d",&UserInput);

    //�ж���ż
    int remainder=UserInput%2;
    bool isEven=(0==remainder)?true:false;

    if(0==UserInput){
        printf("�����������0������ż����\n");
    }else if(true==isEven&&UserInput>0){
        printf("�������������������ż����\n");
    }else if(true==isEven&&UserInput<0){
        printf("����������Ǹ�������ż����\n");
    }else if(false==isEven&&UserInput>0){
        printf("�������������������������\n");
    }else{
        printf("����������Ǹ�������������\n");
    }

    return 0;
}