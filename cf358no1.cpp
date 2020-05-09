#include<iostream>
using namespace std;

int main()
{
    long long int m,n,i,x;
    long long int res=0;
    cin>>m>>n;
    for(i=1;i<=m;i++)
    {
        x=n/5;
        if((5-(i%5))<=(n%5))
        {
            x++;
        }
        res=res+x;
    }
    cout<<res;


    return 0;
}
