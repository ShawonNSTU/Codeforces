#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
int main()
{
    int x,n;
    string str;
    vector<int>v;
    scanf("%d",&n);
    cin>>str;
    for(int i=1;i<=n;i++){
        scanf("%d",&x);
        v.push_back(x);
    }
    bool check=false;
    int sec=1e9;
    printf("%d\n",sec);
    for(int i=0;i<str.size();i++){
       if(str[i]=='R'&&str[i+1]=='L'){
        check=true;
        sec=min((v[i+1]-v[i])/2,sec);
       }
    }
    if(check==false) printf("-1\n");
    else printf("%d\n",sec);
    return 0;
}
