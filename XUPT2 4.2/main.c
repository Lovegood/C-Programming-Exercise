#include <stdio.h>

int main()
{
    int fenzi[10],fenmu[10];

    fenmu[0]=1;
    fenzi[0]=2;
    for(int i=1;i<10;i++){
        fenzi[i]=fenzi[i-1]+i;
        fenmu[i]=fenzi[i-1];
    }

    double sum=0;
    for(int i=0;i<10;i++){
        sum+=fenzi[i]/fenmu[i];;
    }

    printf("%lf",sum);

    return 0;
}
