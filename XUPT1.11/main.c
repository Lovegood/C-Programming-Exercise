#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int age,ticket,price;
    char isstudent[4];
    printf("Please enter the normal ticket's price.\n");
    scanf("%d",&price);

    printf("Please enter the tourist's age.\n");
    scanf("%d",&age);

    printf("Please use \"YES/NO\" to answer the following question:\nIs the tourist a student?\n");
    scanf("%s",&isstudent);

    if(age<=12){
        ticket=10;
    }else if(age>=60){
        ticket=price*0.3;
    }else if(strcmp(isstudent,"YES")==0||strcmp(isstudent,"yes")==0){
        ticket=price*0.5;
    }else{
        ticket=price;
    }

    printf("The ticket is %d.\n",ticket);

    return 0;
}
