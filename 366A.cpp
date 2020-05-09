#include<iostream>
using namespace std;

int main()
{
    string d,a,c,b,res;
    a="I hate it";
    b="I love it";
    c="I hate that ";
    d="I love that ";
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        if((i%2)==0)
        {
            if(i!=n)
            {
                res=res+d;
            }
            else{
                res=res+b;
            }
        }
        else{
            if(i!=n)
            {
                res=res+c;
            }
            else{
                res=res+a;
            }
        }
    }
    cout<<res;
    return 0;
}
