#include <stdio.h>
#include <string.h>
#define max 101

int main()
{
    char input[max];
    printf("ÇëÊäÈë´ıÅÅĞòµÄ×Ö·û´®£¬²»³¬¹ı100¸ö×Ö·û£º\n");
    scanf("%s",&input);

    printf("\n´ıÅÅĞò×Ö·û´®Îª£º\n%s",input);

    int len=strlen(input);
    char t;
    int change=1;
    for(int i=0;i<len&&change;i++){
        change=0;
        for(int j=0;j<len-i-1;j++){
            if(input[j]>input[j+1]){
                t=input[j];
                input[j]=input[j+1];
                input[j+1]=t;
                change=1;
            }
        }
    }

    printf("\nÅÅĞòºó×Ö·û´®Îª:\n%s",input);

    return 0;
}
