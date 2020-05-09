#include<bits/stdc++.h>
using namespace std;

class vai
{

public:
    vai()
    {
        first=0;

    }
    int first;
    string second;
};

void colorset(int i,vai dp[],int r[],int g[],int b[])
{
    if(dp[i].first-dp[i-1].first==r[i]){dp[i].second="r";}
    if(dp[i].first-dp[i-1].first==g[i]){dp[i].second="g";}
    if(dp[i].first-dp[i-1].first==b[i]){dp[i].second="b";}
}

int main()
{
    int t;
    cin>>t;
    int T=t;
    while(t>0)
    {
        int n,r[21],g[21],b[21];
        cin>>n;
        for(int i=1;i<=n;i++)
        {
            cin>>r[i]>>g[i]>>b[i];
        }
        vai dp[21];
        dp[1].first=min(r[1],min(g[1],b[1]));
        colorset(1,dp,r,g,b);

        for(int i=2;i<=n;i++)
        {
            if(dp[i-1].second=="r")
            {
                dp[i].first=dp[i-1].first+min(g[i],b[i]);

            }
            if(dp[i-1].second=="g")
            {
                dp[i].first=dp[i-1].first+min(r[i],b[i]);

            }
            if(dp[i-1].second=="b")
            {
                dp[i].first=dp[i-1].first+min(r[i],g[i]);
            }
            colorset(i,dp,r,g,b);
        }
        t--;
        cout<<"Case "<<T-t<<": "<<dp[n].first<<endl;
    }
    return 0;
}
