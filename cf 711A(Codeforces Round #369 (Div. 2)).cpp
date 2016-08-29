/*
    Email: shuvroshawon9@gmail.com
    ID: Key_logger
*/

#include <bits/stdc++.h>
int main()
{
    char pair_config[1001][10];
    int n;
    scanf("%d",&n);
    getchar();
    for(int i=0;i<n;i++){
        gets(pair_config[i]);
    }
    bool check=false;
    for(int i=0;i<n;i++){
        if(pair_config[i][0]=='O'&&pair_config[i][1]=='O'){
            check=true;
            pair_config[i][0]='+';
            pair_config[i][1]='+';
            break;
            }
        else if(pair_config[i][3]=='O'&&pair_config[i][4]=='O'){
            check=true;
            pair_config[i][3]='+';
            pair_config[i][4]='+';
            break;
            }
        }
    if(check==true){
        printf("YES\n");
        for(int i=0;i<n;i++) printf("%s\n",pair_config[i]);
    }
    else
        printf("NO\n");
    return 0;
}
