#include <bits/stdc++.h>
int main()
{
    long long n;
    scanf("%I64d",&n);
    if(n>2){
        if(n%2) printf("%lld %lld\n",(n*n-1)/2,(n*n+1)/2);
        else{
            n/=2;
            printf("%lld %lld\n",n*n-1,n*n+1);
        }
    }
    else printf("-1\n");
    return 0;
}
