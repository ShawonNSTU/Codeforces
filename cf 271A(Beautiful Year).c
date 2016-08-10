/*
    Email: shuvroshawon9@gmail.com
    ID: Key_logger
*/

// Beautiful years are the years which has distinct digit...suppose...1987,2013,2014,2015,2016...
// 1988 isn't a beautiful year because in 1988 there are two 8...so the 4 digit are not distinct... :)

#include <stdio.h>
int main()
{
    int i,j,k,m,n,y,check;
    int ara[50];
    scanf("%d",&y);
    for(i=y+1;;i++){
        n=i;
        k=0;
        while(n>0){
           ara[k++]=n%10;
           n/=10;
        }
        int check=0;
        for(j=0;j<k;j++){
            for(m=j+1;m<k;m++){
                if(ara[j]==ara[m]){
                    check=1;
                    break;
                }
            }
            if(check)
                break;
        }
        if(!check){
            printf("%d\n",i);
            break;
        }
    }
    return 0;
}//@END OF SOURCE CODE
