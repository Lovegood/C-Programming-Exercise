#include <stdio.h>

int main(){
	int num[4],temporary;

	for(int i=0;i<4;i++){
        printf("请输入第%d个整数：",i+1);
        scanf("%d",&num[i]);
	}

	//从小到大
	for(int outer=0;outer<4;outer++){
        for(int inner=0;inner<4-outer;inner++){
            if(num[inner]>num[inner+1]){
                temporary=num[inner];
                num[inner]=num[inner+1];
                num[inner+1]=temporary;
            }
        }
	}
	printf("从小到大为：");
	for(int i=0;i<4;i++){
        printf("%d ",num[i]);
	}

	//从大到小
    for(int outer=0;outer<4;outer++){
        for(int inner=0;inner<4-outer;inner++){
            if(num[inner]<num[inner+1]){
                temporary=num[inner];
                num[inner]=num[inner+1];
                num[inner+1]=temporary;
            }
        }
    }
    printf("从大到小为：");
	for(int i=0;i<4;i++){
        printf("%d ",num[i]);
	}

	return 0;
}

