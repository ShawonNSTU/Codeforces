#include <bits/stdc++.h>
#include <vector>
using namespace std;
int main()
{
    vector<int>v;
    int j,n;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>j;
        v.push_back(j);
    }
    int max=0,length=1;
    for(int i=0;i<n-1;i++){
        if(v[i]<v[i+1])
            length++;
        else{
            if(max<length) max=length;
            length=1;
        }
    }
    if(max<length) max=length;
    cout<<max<<endl;
    return 0;
}
