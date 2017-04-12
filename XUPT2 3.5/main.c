#include <stdio.h>
#include <math.h>
#define len 3

int main(){
	double sides[len];

	for(int i=0;i<len;i++){
        printf("请输入第%d个边长：",i+1);
        scanf("%lf",&sides[i]);
	}

	//判断是否是三角形
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

	//debug下面这段注释不要抄【划重点】
	//for(int i=0;i<len;i++){
    //    printf("%d ",sides[i]);
	//}

	if(sides[0]+sides[1]>sides[2]&&sides[2]-sides[0]<sides[1]){
        isTriangle=1;
	}

	//如果是三角形，则:
	if(isTriangle==1){
        //三角形面积计算采用 **海伦公式**
        double area=0,s=0;
        for(int i=0;i<len;i++){
            s+=sides[i];
        }
        s/=2;
        area=sqrt(s*(s-sides[0])*(s-sides[1])*(s-sides[2]));
        printf("该三角形的面积为%lf，形状为",area);
        //判断三角形类型
        if(sides[2]*sides[2]>sides[0]*sides[0]+sides[1]*sides[1]){
            printf("钝角三角形。\n");
        }else if(sides[2]*sides[2]==sides[0]*sides[0]+sides[1]*sides[1]){
            printf("直角三角形。\n");
        }else{
            printf("锐角三角形。\n");
        }
	}else{
	    printf("这三个数字不能组成三角形。\n");
	}

	return 0;
}
