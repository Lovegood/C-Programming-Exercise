#include <stdio.h>

int main()
{
    int input;
    long sum=0L;

    printf("Please enter an integer:");
    scanf("%d",&input);

    for(int temporary=input%10;input>0;input/=10,temporary=input%10){
        while(1==(temporary%2)){
            sum+=temporary*temporary;
            break;
        }
    }

    printf("%ld",sum);

    return 0;
}
