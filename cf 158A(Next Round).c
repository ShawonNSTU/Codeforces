/*
    Email: shuvroshawon9@gmail.com
    ID: Key_logger
*/

#include <stdio.h>
int main()
{
    int ara[51];
    int i,n,k;
    scanf("%d %d",&n,&k);
    for(i=1;i<=n;i++) scanf("%d",&ara[i]);
    int num=ara[k];
    int count=0;
    for(i=1;i<=n;i++){
        if(ara[i]>=num&&ara[i]>0) count++;
    }
    printf("%d\n",count);
}
