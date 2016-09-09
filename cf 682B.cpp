#include <bits/stdc++.h>
#include <vector>
#include <algorithm>
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
    sort(v.begin(),v.end());
    int pick=v[0],counter=2;
    for(int i=1;i<v.size();i++){
        if(v[i-1]<v[i]) v[i]=++pick;
        if(v[i]>=counter) counter++;
    }
    printf("%d\n",counter);
    return 0;
}
