#include <stdio.h>
#include <stdlib.h>

/*
 * 二进制Binary
 * 八进制Octal
 * 十六进制 Hexadecimal
 * 十进制Decimal
 */

int main()
{
    //十进制to二进制
    int D=60;
    char DtoB[10];
    itoa(D,DtoB,2);

    //十进制to八进制
    char DtoO[4];
    itoa(D,DtoO,8);

    //十进制to十六进制
    char DtoH[4];
    itoa(D,DtoH,16);

    //二进制to十进制
    int B=111100;
    int BtoD=0;
    for(int i=B%10,count=0;B>0;B/=10,i=B%10,count++){
        BtoD+=pow(2,count)*i;
    }

    //八进制to十进制
    int O=074;
    char OtoD[4];
    itoa(O,OtoD,10);

    //十六进制to十进制
    int H=0x3C;
    char HtoD[4];
    itoa(H,HtoD,10);

    return 0;
}
