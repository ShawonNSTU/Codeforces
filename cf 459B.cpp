#include <bits/stdc++.h>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
    vector<int>v;
    int i,n,x;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%d",&x);
        v.push_back(x);
    }
    sort(v.begin(),v.end());
    int sz=v.size();
    long long count_f=0,count_l=0;
    for(i=0;;i++){
        if(v[i]==v[0]) count_f++;
        else break;
    }
    if(i!=sz){
        for(i=sz-1;;i--){
            if(v[i]==v[sz-1]) count_l++;
            else break;
        }
        printf("%d %I64d\n",v[sz-1]-v[0],count_f*count_l);
    }
    else{
        long long sum=0;
        for(i=count_f-1;i>=1;i--)
            sum+=i;
        printf("0 %I64d\n",sum);
    }
    return 0;
}
