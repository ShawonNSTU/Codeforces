#include <bits/stdc++.h>
#define llint long long
llint ara[501][501];
int main()
{
    int j,n,pos;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%I64d",&ara[i][j]);
            if(ara[i][j]==0) pos=j;
        }
    }
    if(n>1){
        llint column_sum=0,column_zero_sum=0,result=0;
        if(pos==0) pos++;
        else pos-=1;
        int k=0;
        for(int i=pos;k<n;k++) column_sum+=ara[k][i];
        bool check=false;
        for(int i=0;i<n;i++){
            for(j=0;j<n;j++){
                if(ara[i][j]==0){
                    for(k=0;k<n;k++) column_zero_sum+=ara[k][j];
                    result=column_sum-column_zero_sum;
                    check=true;
                    break;
                }
            }
            if(check==true&&result>0){
                ara[i][j]=result;
            /* SUMMATION OF ROW */
                for(k=0;k<n;k++){
                    llint row_sum=0;
                    for(int m=0;m<n;m++)
                        row_sum+=ara[k][m];
                    if(row_sum!=column_sum){
                        check=false;
                        break;
                    }
                }
                if(check==true){
                    llint column_sum_all;
                /* SUMMATION OF COLUMN */
                    for(k=0;k<n;k++){
                        column_sum_all=0;
                        for(int m=0;m<n;m++)
                            column_sum_all+=ara[m][k];
                    if(column_sum_all!=column_sum){
                        check=false;
                        break;
                        }
                    }
                    if(check==true){
                        llint primary=0,secondary=0;
                    /* SUMMATION OF PRIMARY DIAGONAL */
                        for(k=0;k<n;k++)
                            primary+=ara[k][k];
                        if(primary!=column_sum)
                            check=false;
                        if(check==true){
                            int m=0;
                        /* SUMMATION OF SECONDARY DIAGONAL */
                            for(k=n-1;k>=0;k--)
                                secondary+=ara[k][m++];
                        if(secondary!=column_sum)
                            check=false;
                        }
                    }
                }
            }
            else if(check==true&&result<=0){
                printf("-1\n");
                break;
            }
            if(check==true&&result>0){
                printf("%I64d\n",result);
                break;
            }
            else if(check==false&&result>0){
                printf("-1\n");
                break;
            }
        }
    }
    else printf("1\n");
}
