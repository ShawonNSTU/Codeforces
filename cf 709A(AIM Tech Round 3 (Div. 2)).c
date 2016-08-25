/*
    Email: shuvroshawon9@gmail.com
    ID: Key_logger
*/

#include <stdio.h>
long long int oranges[100001];
int main()
{
    int waste=0,i,n,b,d;
    scanf("%d %d %d",&n,&b,&d);
    for(i=0;i<n;i++)
        scanf("%d",&oranges[i]);
    long long int sum=0;
    for(i=0;i<n;i++){
        if(oranges[i]<=b){
            sum+=oranges[i];
            if(sum>d){
                waste++;
                sum=0;
            }
        }
    }
    printf("%d\n",waste);
    return 0;
}
