#include <stdio.h>
#include <stdlib.h>
#define MAX 100

int main()
{
    int userinput;
    printf("Please enter a integer.\n");
    scanf("%d",&userinput);

    char octal[MAX],hex[MAX];
    itoa(userinput,octal,8);
    itoa(userinput,hex,16);

    printf("Octal and Hex of the integer %d that you entered is %s and %s.\n",userinput,octal,hex);

    return 0;
}
