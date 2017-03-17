#include <stdio.h>
#include <stdbool.h>

int main()
{
    int UserInput;
    bool isPositiveNum,isEven;

    printf("请输入一个整数：");
    scanf("%d",&UserInput);

    //判断奇偶
    int remainder=UserInput%2;
    isEven=(remainder==0)?true:false;

    if(UserInput==0){
        printf("您输入的数是0，它是偶数。\n");
    }else if(isEven==true&&UserInput>0){
        printf("您输入的数是正数且是偶数。\n");
    }else if(true==isEven&&UserInput<0){
        printf("您输入的数是负数且是偶数。\n");
    }else if(false==isEven&&UserInput>0){
        printf("您输入的数是正数且是奇数。\n");
    }else{
        printf("您输入的数是负数且是奇数。\n");
    }

    return 0;
}
