#include <stdio.h>
#include <stdlib.h>

/*
 * ������Binary
 * �˽���Octal
 * ʮ������ Hexadecimal
 * ʮ����Decimal
 */

int main()
{
    //ʮ����to������
    int D=60;
    char DtoB[10];
    itoa(D,DtoB,2);

    //ʮ����to�˽���
    char DtoO[4];
    itoa(D,DtoO,8);

    //ʮ����toʮ������
    char DtoH[4];
    itoa(D,DtoH,16);

    //������toʮ����
    int B=111100;
    int BtoD=0;
    for(int i=B%10,count=0;B>0;B/=10,i=B%10,count++){
        BtoD+=pow(2,count)*i;
    }

    //�˽���toʮ����
    int O=074;
    char OtoD[4];
    itoa(O,OtoD,10);

    //ʮ������toʮ����
    int H=0x3C;
    char HtoD[4];
    itoa(H,HtoD,10);

    return 0;
}
