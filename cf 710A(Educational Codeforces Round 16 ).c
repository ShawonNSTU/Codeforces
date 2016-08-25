/*
    Email: shuvroshawon9@gmail.com
    ID: Key_logger
*/

#include <stdio.h>
int main()
{
    char ara[8]={"abcdefgh"};
    char ch;
    int i,row,pos;
    scanf("%c %d",&ch,&row);
    for(i=0;i<8;i++){
        if(ara[i]==ch)
            pos=i+1;
    }
    int count=3;
    int check=0,check1=0;
    if(8-pos>0&&8-pos!=7){
        check=1;
        count++;
    }
    if(8-row>0&&8-row!=7){
        count++;
        check1=1;
    }
    if(check==1&&check1==1) count+=2;
    if(check1==1||check==1) count++;
    printf("%d\n",count);
    return 0;
}
