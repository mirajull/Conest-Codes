#include<iostream>
using namespace std;

int main()
{
    int k,m,r,i,ans;
    cin>>k>>r;
    i=1;
    while(1)
    {
        m=k*i;
        if(m%10==0)
        {
            ans=i;
            break;
        }
        if((m%10)==r)
        {
            ans=i;
            break;
        }
        i++;
    }

    cout<<ans;
    return 0;
}
