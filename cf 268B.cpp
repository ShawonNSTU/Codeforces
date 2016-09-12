#include <bits/stdc++.h>
int main()
{
    int n;
    scanf("%d",&n);
    if(n==1){
        printf("1\n");
        return 0;
    }
    int count=n;
    for(int i=1;i<n-1;i++){
        count+=i*(n-(i+1));
        count+=i+1;
    }
    printf("%d\n",++count);
    return 0;
}
