#include <stdio.h>
#define row 5

void setMax(int*,int*,int);
void setMin(int*,int*,int,int);

int main()
{
    int a[row][row];
    for(int i=0;i<row;i++){
        for(int j=0;j<row;j++){
            printf("请输入第%d行第%d列的元素：",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
    }
    setMax(a,a+row*row,row*row);
    setMin(a,a+row*row,row,row);
    printf("变换后的矩阵为：\n");
    for(int i=0;i<row;i++){
        for(int j=0;j<row;j++){
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}

void setMax(int *start,int *end,int len){
    int t;
    int *max;
    max=start;
    for(int i=1;i<len;i++){
        if(*(start+i)>*max){
            max=start+i;
        }
    }
    t=*max;
    *max=*(start+(len+1)/2);
    *(start+(len-1)/2)=t;
}

void setMin(int *start,int *end,int line,int column){
    //find
    int *min[4];
    for(int i=0;i<4;i++){
        min[i]=start+i;
    }
    int change=1;
    int *pt;
    for(int i=0;i<4&change;i++){
        change=0;
        for(int j=0;j<4-i-1;j++){
            if(*min[j]>*min[j+1]){
                change=1;
                pt=min[j];
                min[j]=min[j+1];
                min[j+1]=pt;
            }
        }
    }
    for(int i=4;i<line*column;i++){
        if( *(start+i)<*min[3] ){
            min[3]=start+i;
            for(int j=3;*min[j]<*min[j-1];j--){
                pt=min[j];
                min[j]=min[j-1];
                min[j-1]=pt;
            }
        }
    }

    //set
    int t;

    t=*min[0];
    *min[0]=*start;
    *start=t;

    t=*min[1];
    *min[1]=*(start+line-1);
    *(start+line-1)=t;

    t=*min[2];
    *min[2]=*(start+(line*(column-1)));
    *(start+(line*(column-1)))=t;

    t=*min[3];
    *min[3]=*(start+(line*column-1));
    *(start+(line*column-1))=t;
}
