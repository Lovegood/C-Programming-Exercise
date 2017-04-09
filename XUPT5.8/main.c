#include <stdio.h>
#define len 16

int main()
{
    int spaceCount;
    for(int line=1;line<=5;line++){
        if(line<3){
            spaceCount=len-line*2;
        }else{
            spaceCount=(line-3)*2+10;
        }
        for(int space=0;space<spaceCount;space++){
            printf(" ");
        }
        for(int i=spaceCount;i<=len;i++){
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
