/*
    Email: shuvroshawon9@gmail.com
    ID: Key_logger
*/

#include <iostream>
using namespace std;
int main()
{
    int t,k;
    long long n,sum1,sum2;
    cin>>t;
    while(t--){
        k=1,sum1=1,sum2=0;
    cin>>n;
    /* sum of 1 to n */
    if(n%2==0) sum2=(n/2)*(2+(n-1)); // if n is even then sum = (n/2)*((2*a)+((n-1)*d)) . . .
    else{
        n=n-1;
        sum2=(n/2)*(2+(n-1)); // // if n is odd then first I sum of 1 to (n-1) because (n-1) is even. . .
        sum2+=n+1; // // Then I just add the n with the sum of 1 to (n-1) . . .
    }
    /* Here I add all powers of 2. . . EX: 2^1+2^2+2^3+2^4+2^5+...... */
    for(int i=2;;){
        if(k+k>n) break; // It's the condition that will terminate the loop. . .
        if(k+k==i){
            k=i;
            sum1+=i;
            i*=2;
        }
    }
    cout<<sum2-(sum1*2)<<endl;
    }
    return 0;
}
