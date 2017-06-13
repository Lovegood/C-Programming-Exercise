#include <stdio.h>

int add(int);

int main(){
	int n;
	printf("请输入n的值：\n");
	scanf("%d",&n);
	printf("从1到n的和为%d\n", add(n));
	return 0;
}

int add(int n){
	int sum=0;
	if(n>1){
        sum=n+add(n-1);
	}else{
	    sum=1;
	}
	return sum;
}
