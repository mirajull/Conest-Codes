#include<bits/stdc++.h>
using namespace std;


int main()
{
    int k2,k3,k5,k6;
    cin>>k2>>k3>>k5>>k6;
    int k=min(k6,min(k2,k5));
    int m=k2-k;
    if(m<0)m==0;
    int g=min(m,k3);
    int res= k*256+g*32;
    cout<<res<<endl;
    return 0;
}
