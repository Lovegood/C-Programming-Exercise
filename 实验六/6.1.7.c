#include <stdio.h>

int cntAge(int);

int main(){
	int n;
	printf("请输入n的值：",&n);
	scanf("%d",&n);
	printf("第%d个人的年龄为%d",n,cntAge(n));
	
	return 0;
}

int cntAge(int n){
	if(n>0){
		age=cntAge(n-1);
	}
	return 
}