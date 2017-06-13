#include <stdio.h>
#include <math.h>

void perfect();

int main(){
	perfect();
	return 0;
}

void perfect(){
	printf("10000以内的完全数有：\n");
	int add,divisor;//divisor约数
	for(int i=2;i<10000;i++){
		add=0;
		//求因数和
		for(int test=1;test<=sqrt(i);test++){
			if(i%test==0){
				divisor=i/test;
				add+=test+divisor;
			}
		}
		if(i==add-i){
			printf("%d\n",i);
		}
	}
}
