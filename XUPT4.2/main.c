#include <stdio.h>
#include <stdbool.h>

int main()
{
    int UserInput;
    bool isPositiveNum,isEven;

    printf("������һ��������");
    scanf("%d",&UserInput);

    //�ж���ż
    int remainder=UserInput%2;
    isEven=(remainder==0)?true:false;

    if(UserInput==0){
        printf("�����������0������ż����\n");
    }else if(isEven==true&&UserInput>0){
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
