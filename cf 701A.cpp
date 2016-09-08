#include <bits/stdc++.h>
int k=0,save_pos[1000];
bool SavePos(int n)
{
    for(int i=0;i<k;i++){
        if(n==save_pos[i])
            return false;
    }
    return true;
}
int main()
{
    int sum=0,n;
    scanf("%d",&n);
    int ara[n];
    for(int i=0;i<n;i++){
        scanf("%d",&ara[i]);
        sum+=ara[i];
    }
    int val=sum/(n/2);
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(ara[i]+ara[j]==val&&SavePos(i)==true&&SavePos(j)==true){
                save_pos[k++]=i;
                save_pos[k++]=j;
                printf("%d %d\n",i+1,j+1);
                break;
            }
        }
    }
    return 0;
}
