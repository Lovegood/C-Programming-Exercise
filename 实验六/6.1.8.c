#include <stdio.h>
#define size 4

int a[size][size];
int max,min;
int max_i,max_j;
int min_i,min_j;

void findMax();
void findMin();

int main(){
	for (int i = 0; i < size; ++i){
		for (int j = 0; j < size; ++j){
			printf("请输入第%d行第%d列的数据：",i+1,j+1);
			scanf("%d",&a[i][j]);
		}
	}
	findMin();
	findMax();
	printf("矩阵中的最大元素为%d，下标为(%d,%d)。\n",max,max_i+1,max_j+1);
	printf("矩阵中的最小元素为%d，下标为(%d,%d)。\n",min,min_i+1,min_j+1);
	return 0;
}

void findMax(){
	max=a[0][0];
	for (int i = 0; i < size; ++i){
		for (int j = 0; j < size; ++j){
			if (a[i][j]>max){
				max=a[i][j];
				max_i=i;
				max_j=j;
			}
		}
	}
}

void findMin(){
	min=a[0][0];
	for (int i = 0; i < size; ++i){
		for (int j = 0; j < size; ++j){
			if (a[i][j]<min){
				min=a[i][j];
				min_i=i;
				min_j=j;
			}
		}
	}
}