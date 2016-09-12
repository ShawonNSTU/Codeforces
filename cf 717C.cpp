#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<long long>v;
    int n;
    long long x,var;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%I64d",&x);
        v.push_back(x);
    }
    sort(v.begin(),v.end());
    long long sz=v.size();
    if(n%2) v[sz/2]*=v[sz/2];
    for(int i=0;i<v.size()/2;i++){
        var=v[i]*v[sz-1];
        v[sz-1]=v[sz-1]*v[i];
        v[i]=var;
        --sz;
    }
    long long sum=0;
    for(int i=0;i<v.size()/2;i++) sum+=v[i]+v[i];
    if(n%2){
        sz=v.size();
        sum+=v[sz/2];
    }
    printf("%I64d\n",sum%10007);
}
