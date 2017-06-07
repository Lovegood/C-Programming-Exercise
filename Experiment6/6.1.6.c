#include <stdio.h>

int p(int);
int s(int);
float f(int,int);

int main()
{
	int x,y;
	printf("请输入两个整数，并以空格分隔：");
	scanf("%d %d",&x,&y);
	printf("f(%d,%d)=%f",x,y,f(x,y));
	return 0;
}

float f(int x,int y){
	return ((float)s(x))/((float)s(y));
}

int s(int n){
	int result=0;
	for (int i = 0; i <= n; ++i)
	{
		result+=p(i);
	}
	return result;
}

int p(int n){
	int result=1;
	for (int i = 0; i <= n; ++i)
	{
		result*=i;
	}
	return result;
}
