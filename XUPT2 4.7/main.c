#include <stdio.h>

int main()
{
    int rest=1;
    for(int day=10;day>0;day--){
        rest=(rest+1)*2;
    }
    printf("原来有%d个桃子。\n",rest);
    //第二部分
    rest=1;
    for(int day=10;day>0;day--){
        rest=(rest+2)*2;
    }
    printf("原来有%d个桃子。\n",rest);

    return 0;
}
