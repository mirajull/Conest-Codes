#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n,k,cnt=0;
    string t,s;
    cin>>n>>k;
    cin>>t;
    s=t;
    for(int i=0;i<n/2;i++)
    {
        if(s[i]==s[n-1-i])
        {
            cnt++;
        }
        else
        {
            break;
        }
    }
    if(cnt!=0)
    {
        t=t.substr(cnt);
    }
    for(int i=1;i<k;i++)
    {
        s+=t;
    }
    cout<<s;
    return 0;
}
