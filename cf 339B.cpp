#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,x;
    vector<int>v;
    scanf("%d %d",&n,&m);
    for(int i=1;i<=m;i++){
        scanf("%d",&x);
        v.push_back(x);
    }
    long long count=v[0]-1;
    for(int i=1;i<v.size();i++){
        if(v[i]<v[i-1]) count+=(n-v[i-1])+(v[i]-1)+1;
        else if(v[i]>v[i-1]) count+=v[i]-v[i-1];
    }
    printf("%I64d\n",count);
    return 0;
}
