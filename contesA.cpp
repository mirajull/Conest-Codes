#include<iostream>
#include<algorithm>
using namespace std;

int ans=-1;
int test(int a,int b)
{
    int c=a*b;
    int lagbe=c;
    int d;
    while(c>9)
    {
        d=c%10;
        c=c/10;
        if( (c%10)!=(d-1))
        {
            return 0;

        }
    }
    ans=lagbe;
    return 1;
}

int main()
{
    int n,ara[1000];
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>ara[i];
    }
    sort(ara,ara+n);
    int f=0;
    for(int i=n-1;i>=0 && f==0;i--)
    {
        for(int j=i-1;j>=0;j--)
        {
            if(test(ara[i],ara[j])==1)
            {
                f++;
                break;
            }
        }
    }
    cout<<ans<<endl;

    return 0;
}
