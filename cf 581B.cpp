#include <bits/stdc++.h>
#include <vector>
using namespace std;
int main()
{
    vector<int>v;
    int n,x;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%d",&x);
        v.push_back(x);
    }
    int sz=v.size();
    int cnt=v[sz-1];
    v[sz-1]=0;
    for(int i=sz-2;i>=0;i--){
        if(v[i]<=cnt) v[i]=(cnt+1)-v[i];
        else{
            cnt=v[i];
            v[i]=0;
        }
    }
    for(int i=0;i<sz;i++){
        if(i==sz-1) printf("%d\n",v[i]);
        else printf("%d ",v[i]);
    }
    return 0;
}
