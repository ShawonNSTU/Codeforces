/*
    Email: shuvroshawon9@gmail.com
    ID: Key_logger
*/

#include <stdio.h>
int main()
{
    int t,s,x;
    scanf("%d %d %d",&t,&s,&x);
    if(t>x) printf("NO\n");
    else if(t==x) printf("YES\n");
    else{
        int i=1,check=0,m=t,j=0;
        for(;t<=x;i++){
            if(i%2!=0){
                t=m+((++j)*s);
            }
            else t+=1;
            if(t==x){
                check=1;
                break;
            }
        }
        if(check) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}//@END OF SOURCE CODE
