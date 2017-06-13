#include <stdio.h>

void Narcissistic();

int main(){
    Narcissistic();
	return 0;
}

void Narcissistic(){
    printf("100到999中的水仙花数有：\n");
	int cpy,digit[2];
	for(int i=100;i<1000;i++){
		cpy=i;
		digit[0]=cpy%10;
		cpy/=10;
		digit[1]=cpy%10;
		cpy/=10;
		if( i==digit[0]*digit[0]*digit[0]+digit[1]*digit[1]*digit[1]+cpy*cpy*cpy ){
			printf("%d\n",i);
		}
	}
}
