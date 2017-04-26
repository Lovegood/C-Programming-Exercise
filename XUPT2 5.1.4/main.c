#include <stdio.h>
#include <stdlib.h>
#define len 10

int main()
{
    int a[len]={1234,5678,9012,3456,7890,1234,5678,9012,3456,7890};
    int wei[len][4];//四位,依次 0千 1百 2十 3个

    for(int i=0;i<len;i++){
        wei[i][0]=a[i];
        for(int j=3;j>0;j--){
            wei[i][j]=wei[i][0]%10;
            wei[i][0]/=10;
        }
    }

    int std[2];
    int b[len];
    int cnt;
    for(int i=0;i<len;i++){
        std[0]=wei[i][0]+wei[i][2];
        std[1]=wei[i][1]+wei[i][3];

        for(int k=1;k<len;k++){
            b[k]=0;
        }
        cnt=0;

        for(int j=i;j<len-i;j++){
            if( std[0]==wei[j][0]+wei[j][2] && std[1]==wei[j][1]+wei[j][3] ){
                b[cnt]=a[j];
                cnt++;
            }
        }

        if(cnt>1){
            printf("与%d千位和十位之和与百位和个位之和相等的有：",a[i]);
            for(int k=0;k<cnt;k++){
                printf("%d\t",b[k]);
            }
        printf("\n");
        }
    }

    return 0;
}
