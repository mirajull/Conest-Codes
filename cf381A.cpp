#include<iostream>
using namespace std;

int main()
{
    long long int n,a,b,c;
    cin>>n>>a>>b>>c;
    int lagbe = (4 - n%4);
    int res=0;
    if(lagbe==1)
    {
        res=min(min(a,3*c),(b+c));

    }
    if(lagbe==2)
    {
        res=min(min(2*a,b),2*c);
    }
    if(lagbe==3)
    {
        res=min(min(3*a,c),(a+b));
    }
    cout<<res<<endl;
    return 0;
}
