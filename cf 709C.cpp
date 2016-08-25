#include <bits/stdc++.h>
#define MAX 100001
char str[MAX],s[MAX];
int main()
{
    int k=0;
    bool sub=false;
    gets(str);
    int len=strlen(str);
    for(int i=0;i<len;i++){
        if(str[i]!='a'){
            sub=true;
            s[k++]=str[i]-1;
        }
        else if(str[i]=='a'){
            if(sub==false)
                s[k++]=str[i];
            else{
                while(i<len){
                    s[k++]=str[i];
                    i++;
                }
                break;
            }
        }
    }
    if(sub==false) s[k-1]=s[k-1]+25;
    s[k]='\0';
    printf("%s\n",s);
    return 0;
}
