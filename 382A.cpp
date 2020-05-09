#include<bits/stdc++.h>
using namespace std;

int dif(int a,int b)
{
    return max(a,b)-min(a,b) ;
}
int main()
{
    int n,k,insect,start,f=0;
    cin>>n>>k;
    char ara[100];
    scanf("%s",ara);



    for(int i=0;i<n;i++)
    {
        if(ara[i]=='T')
        {
            insect=i;
        }
        if(ara[i]=='G')
        {
            start=i;
        }
    }

   // cout<<start<<" "<<insect<<endl;
    if(start==insect)
    {
        cout<<"YES"<<endl;
        return 0;
    }
    if(start<insect)
    {
        for(int i=start+k;i<=insect;i=i+k)
        {
            if(ara[i]=='#')
            {
                f++;
                break;
            }
        }
    }
    if(start>insect)
    {
        for(int i=start-k;i>=insect;i-=k)
        {
            if(ara[i]=='#')
            {
                f++;
                break;
            }
        }
    }

    //cout<<f<<endl;
    if(f==0 && dif(start,insect)%k==0)
    {
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }

    return 0;
}
