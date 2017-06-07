#include <stdio.h>

int main()
{
    int n,m;
    printf("请输入n行m列矩阵的行数，即n值：");
    scanf("%d",&n);
    printf("请输入n行m列矩阵的列数，即m值：");
    scanf("%d",&m);

    int a[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            printf("请输入第%d行第%d列的数字：",i+1,j+1);
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

    printf("排序后的矩阵为：\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }


    return 0;
}
