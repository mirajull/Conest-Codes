#include<iostream>
using namespace std;

int main()
{
    int m,n,a,ara[125];
    cin>>m;
    for(int i=0;i<m;i++)
    {
        cin>>n>>a;
        ara[i]=a+n;
    }
    for(int i=0;i<m;i++)
    {
        cout<<"Case "<<i+1<<": "<<ara[i]<<endl;
    }
    return 0;
}

