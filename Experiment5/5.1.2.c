#include <stdio.h>
#include <stdlib.h>

int main(){
	int row,column,i,j,cnt;
	int **array;
	int index,max,isExisted=1;

	printf("row:");
	scanf("%d",&row);
	printf("column:");
	scanf("%d",&column);

	array=(int**)malloc(row*sizeof(int*));
	for(i=0;i<row;i++){
		array[i]=(int*)malloc(column*sizeof(int));
	}

	for(i=0;i<row;i++){
		for(j=0;j<column;j++){
			printf("%d,%d:",i,j);
			scanf("%d",&array[i][j]);
		}
	}

	for(i=0;i<row;i++){
		for(j=0;j<column;j++){
			printf("%d\t",array[i][j]);
		}
		printf("\n");
	}

	//find
	for(i=0;i<row;i++){
		max=array[i][0];
		index=0;
		for(j=1;j<column;j++){//max in row
			if(array[i][j]>max){
				max=array[i][j];
				index=j;
			}
		}
		for(cnt=0;cnt<row;cnt++){//max is min in column?
			if(array[cnt][index]<=max){
				isExisted=0;
				break;
			}
		}
		if(isExisted==1){
			printf("鞍点是%d",max);
		}
	}
	if(isExisted==0){
		printf("鞍点不存在\n");
	}

	for(i=0;i<row;i++){
		free(array[i]);
	}
	free(array);

	return 0;
}
