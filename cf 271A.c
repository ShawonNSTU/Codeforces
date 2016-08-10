#include <stdio.h>
int main()
{
    int i,j,k,m,n,y,check;
    int ara[50];
    scanf("%d",&y);
    for(i=y+1;;i++){
        n=i;
        k=0;
        while(n>0){
           ara[k++]=n%10;
           n/=10;
        }
        int check=0;
        for(j=0;j<k;j++){
            for(m=j+1;m<k;m++){
                if(ara[j]==ara[m]){
                    check=1;
                    break;
                }
            }
            if(check)
                break;
        }
        if(!check){
            printf("%d\n",i);
            break;
        }
    }
    return 0;
}
