#include<iostream>
using namespace std;

int sum(int ara[],int s,int e)
{

    int sm=0;
    for(int i=s;i<=e;i++)
    {
        sm=sm+ara[i];
    }
    return sm;
}


int main()
{
    int n,m,s,e;

    int ara[100];
    cin>>n>>m;
    for(int i=1;i<=n;i++)
    {
        cin>>ara[i];
    }
    int res=0;
    for(int i=0;i<m;i++)
    {
        cin>>s>>e;
        if(sum(ara,s,e)>0)
        {
            res=res+sum(ara,s,e);
        }
    }
    cout<<res<<endl;
    return 0;
}
