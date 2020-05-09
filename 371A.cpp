#include<iostream>
using namespace std;

int main()
{
    long long int l1,r1,l2,r2,k;
    cin>>l1>>r1>>l2>>r2>>k;
    long long int minn;
    long long int maxx;
    long long int res;
    if(l2>=l1)
    {
        maxx=l2;
    }
    else{
        maxx=l1;
    }
    if(r2<=r1)
    {
        minn=r2;
    }
    else{
        minn=r1;
    }
    res=minn-maxx+1;
    if(k>=maxx&&k<=minn)
    {
        res=res-1;
    }
    cout<<res;
    return 0;
}
