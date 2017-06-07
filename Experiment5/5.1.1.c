#include <stdio.h>
#define r 3
#define c 5

int main()
{
    int a[r][c]={ {11,12,13,14,15} , {21,22,23,24,25} , {31,32,33,34,35} };
    int * p[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            p[i][j]=&a[i][j];
        }
    }
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%p\t",p[i][j]);
        }
        printf("\n");
    }

    return 0;
}
