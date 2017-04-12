#include <stdio.h>

int main()
{
    unsigned long long sum=0,t;

    for(int n=1;n<100;n++){
        t=1;
        for(int i=1;i<=n;i++){
            t*=i;
        }
        sum+=t;
    }

    printf("%lld",sum);

    return 0;
}
