#include <stdio.h>
int main()
{
    int i,n,m,swap,check,div_count,range,first;
    long long int count=0;
    scanf("%d %d",&n,&m);
    if(n>m){
        swap=m;
        m=n;
        n=swap;
    }
    for(i=1;i<=n;i++){
        range=1;
        first=range;
        check=0;
        while((i+range)%5!=0){
            range++;
            if(range>m){
                check=1;
                break;
            }
            first=range;
        }
        if(!check){
            count++;
            div_count=(m-first)/5;
            count+=div_count;
        }
    }
    printf("%lld\n",count);
    return 0;
}
