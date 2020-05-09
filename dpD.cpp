#include<bits/stdc++.h>
using namespace std;


int main()
{
    int t;
    while((scanf("%d",&t)!=EOF))
    {
        int dp[t];
        dp[0]=0;

        for(int i=1;i<=t;i++)
        {
            dp[i]=max((dp[i/2]+dp[i/3]+dp[i/4]),i);
        }
        cout<<dp[t]<<endl;
    }
    return 0;
}
