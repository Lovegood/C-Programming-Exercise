#include <stdio.h>

int main()
{
    int rest=1;
    for(int day=10;day>0;day--){
        rest=(rest+1)*2;
    }
    printf("ԭ����%d�����ӡ�\n",rest);
    //�ڶ�����
    rest=1;
    for(int day=10;day>0;day--){
        rest=(rest+2)*2;
    }
    printf("ԭ����%d�����ӡ�\n",rest);

    return 0;
}
