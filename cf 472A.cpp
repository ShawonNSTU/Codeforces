#include <iostream>
#include <math.h>
#include <stdlib.h>
using namespace std;
const int MAX=1000001;
bool prime[MAX];
char ch(' ');
void seive()
{
    int i,j,x;
    x=sqrt(MAX);
    for(i=2;i<=MAX;i++) prime[i]=true;
    prime[0]=prime[1]=false;
    for(i=4;i<=MAX;i+=2)
        prime[i]=false;
    for(i=3;i<=x;i+=2){
        for(j=i*i;j<=MAX;j+=i)
            prime[j]=false;
    }
}
int main()
{
    seive();
    int i,n;
    cin>>n;
    for(i=n/2;;i++){
        if(prime[i]==false&&prime[n-i]==false){
            cout<<n-i<<ch<<i<<endl;
            break;
        }
    }
    return 0;
}
