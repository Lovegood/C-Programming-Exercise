#include <stdio.h>
#include <math.h>
#define len 3

int main(){
	double sides[len];

	for(int i=0;i<len;i++){
        printf("�������%d���߳���",i+1);
        scanf("%lf",&sides[i]);
	}

	//�ж��Ƿ���������
	int isTriangle=0;
	double temporary;
	for(int outer=0;outer<len;outer++){
        for(int inner=0;inner<len-outer;inner++){
            if(sides[inner]>sides[inner+1]){
                temporary=sides[inner];
                sides[inner]=sides[inner+1];
                sides[inner+1]=temporary;
            }
        }
	}

	//debug�������ע�Ͳ�Ҫ�������ص㡿
	//for(int i=0;i<len;i++){
    //    printf("%d ",sides[i]);
	//}

	if(sides[0]+sides[1]>sides[2]&&sides[2]-sides[0]<sides[1]){
        isTriangle=1;
	}

	//����������Σ���:
	if(isTriangle==1){
        //���������������� **���׹�ʽ**
        double area=0,s=0;
        for(int i=0;i<len;i++){
            s+=sides[i];
        }
        s/=2;
        area=sqrt(s*(s-sides[0])*(s-sides[1])*(s-sides[2]));
        printf("�������ε����Ϊ%lf����״Ϊ",area);
        //�ж�����������
        if(sides[2]*sides[2]>sides[0]*sides[0]+sides[1]*sides[1]){
            printf("�۽������Ρ�\n");
        }else if(sides[2]*sides[2]==sides[0]*sides[0]+sides[1]*sides[1]){
            printf("ֱ�������Ρ�\n");
        }else{
            printf("��������Ρ�\n");
        }
	}else{
	    printf("���������ֲ�����������Ρ�\n");
	}

	return 0;
}
