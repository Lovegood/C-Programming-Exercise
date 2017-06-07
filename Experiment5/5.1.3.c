#include <stdio.h>
#define row 3
#define len 80

int main()
{
    const char s[row][len+1]={"ABCDEFGHIJKLMNOPQRSTUVWXYZ_, !@#abcdefghijklmnopqrstuvwxyz_, !@#0123456789_, !@#","ABCDEFGHIJKLMNOPQRSTUVWXYZ_, !@#abcdefghijklmnopqrstuvwxyz_, !@#0123456789_, !@#","ABCDEFGHIJKLMNOPQRSTUVWXYZ_, !@#abcdefghijklmnopqrstuvwxyz_, !@#0123456789_, !@#"};

    int upperLetter=0,lowerLetter=0,num=0,space=0,others=0;
    char t;

    for(int i=0;i<row;i++){
        for(int j=0;j<len;j++){
            t=s[i][j];
            if(32==t){//space ASCII 32
                space++;
            }else if(t>=48&&t<=57){//0-48,9-57
                num++;
            }else if(t>=65&&t<=90){//A-65 Z-90
                upperLetter++;
            }else if(t>=97&&t<=122){//a-97 z-122
                lowerLetter++;
            }else{
                others++;
            }
        }
    }

    printf("大写字母数%d,小写字母数%d,数字数%d,空格数%d,其他字符数%d。\n",upperLetter,lowerLetter,num,space,others);

    return 0;
}
