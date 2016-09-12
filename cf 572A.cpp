#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x,a,b,k,m,mx=0;
    scanf("%d %d %d %d",&a,&b,&k,&m);
    int ara[a],arr[b];
    for(int i=0;i<a;i++)
       scanf("%d",&ara[i]);
    for(int i=0;i<b;i++)
       scanf("%d",&arr[i]);
    if(ara[k-1]<arr[b-m])
        printf("YES\n");
    else printf("NO\n");
    return 0;
}
