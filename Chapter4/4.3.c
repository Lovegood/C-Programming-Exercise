#include <stdio.h>
#include <stdlib.h>

int main()
{
    int age;

    printf("请输入员工的年龄：");
    scanf("%d",&age);

    if(age>=22&&age<=30){
        printf("该员工应该担任的职务是：外勤业务员。\n");
    }else if(age>=31&&age<=45){
        printf("该员工应该担任的职务是：内勤文员。\n");
    }else if(age>=46&&age<=55){
        printf("该员工应该担任的职务是：仓库管理员。\n");
    }else if(age>=56){
        printf("该员工应该退休。\n");
    }else{
        printf("输入有误，请检查。");
    }

    return 0;
}
