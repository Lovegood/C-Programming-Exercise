#include <stdio.h>

int main()
{
    int n,m;
    printf("������n��m�о������������nֵ��");
    scanf("%d",&n);
    printf("������n��m�о������������mֵ��");
    scanf("%d",&m);

    int a[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            printf("�������%d�е�%d�е����֣�",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
    }

    re:for(int row=0;row<n;row++){
        int t;
        for(int i=0;i<m;i++){
            for(int j=0;j<m-i-1;j++){
                if(a[row][j]>a[row][j+1]){
                    t=a[row][j];
                    a[row][j]=a[row][j+1];
                    a[row][j+1]=t;
                }
            }
        }
    }
    for(int column=0;column<n;column++){
        int t;
        for(int i=0;i<n;i++){
            for(int j=0;j<n-i-1;j++){
                if(a[j][column]>a[j+1][column]){
                    t=a[j][column];
                    a[j][column]=a[j+1][column];
                    a[j+1][column]=t;
                }
            }
        }
    }

    printf("�����ľ���Ϊ��\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }


    return 0;
}
