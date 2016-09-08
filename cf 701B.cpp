#include <bits/stdc++.h>
#include <vector>
#define SIZE 100001
using namespace std;
int main()
{
    vector<bool>ROW(SIZE),COLUMN(SIZE);
    int x,y,m,k=0;
    long long n;
    scanf("%I64d %d",&n,&m);
    vector<long long>SAFE(m);
    long long under_attack=n*n;
    int row=n;
    int column=n;
    for(int i=1;i<=n;i++){
        ROW[i]=true;
        COLUMN[i]=true;
    }
    for(int i=1;i<=m;i++){
        scanf("%d %d",&x,&y);
        if(ROW[x]==true&&COLUMN[y]==true){
            ROW[x]=false;
            COLUMN[y]=false;
            under_attack-=(row+column)-1;
            --row;
            --column;
            SAFE[k++]=under_attack;
        }
        else if(ROW[x]==false&&COLUMN[y]==true){
            COLUMN[y]=false;
            under_attack-=column;
            --row;
            SAFE[k++]=under_attack;
        }
        else if(ROW[x]==true&&COLUMN[y]==false){
            ROW[x]=false;
            under_attack-=row;
            --column;
            SAFE[k++]=under_attack;
        }
        else SAFE[k++]=under_attack;
    }
    for(int i=0;i<k;i++){
        printf("%I64d",SAFE[i]);
        if(i!=k-1) printf(" ");
    }
    return 0;
}
