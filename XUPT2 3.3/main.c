#include <stdio.h>

int main(){
	int num[4],temporary;

	for(int i=0;i<4;i++){
        printf("�������%d��������",i+1);
        scanf("%d",&num[i]);
	}

	//��С����
	for(int outer=0;outer<4;outer++){
        for(int inner=0;inner<4-outer;inner++){
            if(num[inner]>num[inner+1]){
                temporary=num[inner];
                num[inner]=num[inner+1];
                num[inner+1]=temporary;
            }
        }
	}
	printf("��С����Ϊ��");
	for(int i=0;i<4;i++){
        printf("%d ",num[i]);
	}

	//�Ӵ�С
    for(int outer=0;outer<4;outer++){
        for(int inner=0;inner<4-outer;inner++){
            if(num[inner]<num[inner+1]){
                temporary=num[inner];
                num[inner]=num[inner+1];
                num[inner+1]=temporary;
            }
        }
    }
    printf("�Ӵ�СΪ��");
	for(int i=0;i<4;i++){
        printf("%d ",num[i]);
	}

	return 0;
}

