#include <bits/stdc++.h>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    vector<int>v;
    int x,n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&x);
        v.push_back(x);
    }
    sort(v.begin(),v.end());
    int mid=(n-1)/2;
    printf("%d\n",v[mid]);
    return 0;
}
