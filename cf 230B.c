#include <stdio.h>
#include <math.h>
#define MAX 1000001
char prime[MAX];
void seive()
{
    int i,j,x;
    x=sqrt(MAX);
    prime[0]=prime[1]=1;
    for(i=4;i<=MAX;i+=2)
        prime[i]=1;
    for(i=3;i<=x;i+=2){
        for(j=i*i;j<=MAX;j+=i)
            prime[j]=1;
    }
}
int main()
{
    seive();
    int i,n,j,count,root;
    double num;
    long long int ara[100001];
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%I64d",&ara[i]);
        root=sqrt(ara[i]);
        num=sqrt(ara[i]);
        if(num-root==0&&prime[root]!=1) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}
