#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v;
    int n,x,index[5];
    memset(index,0,sizeof(index));
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%d",&x);
        v.push_back(x);
        index[x]++;
    }
    int count=0;
    if(index[3]>0&&index[1]>0&&index[3]!=index[1]){
        int mn=min(index[3],index[1]);
        count+=mn;
        if(index[3]>index[1]){
            index[3]-=mn;
            index[1]=0;
        }
        else{
            index[1]-=mn;
            index[3]=0;
        }
    }
    else if(index[3]==index[1]){
        count+=index[3];
        index[1]=0;
        index[3]=0;
    }
    if(index[2]>1){
        int mul=index[2]*2;
        count+=mul/4;
        if(mul%4) index[2]=(mul%4)/2;
        else index[2]=0;
    }
    if(index[2]==1){
        count++;
        if(index[1]>=2) index[1]-=2;
        else if(index[1]==1) index[1]=0;
    }
    if(index[1]!=0){
        count+=index[1]/4;
        if(index[1]%4) count++;
    }
    printf("%d\n",count+index[3]+index[4]);
    return 0;
}
