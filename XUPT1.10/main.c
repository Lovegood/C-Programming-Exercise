#include <stdio.h>
#include <stdlib.h>

int main()
{
    int result,x,y,z;
    printf("please enter three integers and separated by spaces.\n");
    scanf("%d %d %d",&x,&y,&z);

    if(x<y){
        if(x<z){
            result=x;
        }else{
            result=z;
        }
    }else{
        if(y<z){
            result=y;
        }else{
            result=z;
        }
    }

    printf("The minimum of the three numbers is %d.\n",result);

    return 0;
}
