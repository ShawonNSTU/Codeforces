#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
int ara[1001][1001],r[1001],c[1001];
int main()
{
    int x,y,n,m,k;
    char ch;
    scanf("%d %d %d",&n,&m,&k);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++)
            scanf("%d",&ara[i][j]);
    }
    for(int i=1;i<=n;i++) r[i]=i;
    for(int i=1;i<=m;i++) c[i]=i;
    for(int i=1;i<=k;i++){
        scanf(" %c %d %d",&ch,&x,&y);
        if(ch=='r')
            swap(r[x],r[y]);
        else if(ch=='c')
            swap(c[x],c[y]);
        else printf("%d\n",ara[r[x]][c[y]]);
    }
    return 0;
}
