#include <stdio.h>

float cal(int);
float fac(int);

int main(){
    int n;
    printf("请输入n的值：");
    scanf("%d",&n);
    printf("值为:%f。\n",cal(n));
    return 0;
}

float cal(int n){
    float result=0;
    for(int i=1;i<=n;i++){
        result+=((float)(i+1))/fac(i);
    }
    return result;
}

float fac(int n){
    float result=1;
    for(int i=1;i<=n;i++){
        result*=i;
    }
    return result;
}
