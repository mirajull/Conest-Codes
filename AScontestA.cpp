#include<iostream>
using namespace std;

int main()
{
    string s,t;
    int n,x,y,a,b,d,m,p;
    cin>>s;
    cin>>t;
    string ans[10][2];
    x=t[0]-s[0];
    a=x;
    y=t[1]-s[1];
    b=y;


    //first segment

    if(x<0)
    {
        x=-x;
    }
    if(y<0)
    {
        y=-y;
    }

    //second segment

    if(x==y)
    {
        n=x;
        d=x;
        m=0;
        p=0;

    }
    else if(x<y)
    {
        n=y;
        d=x;
        m=0;
        p=y-x;
    }
    else if(x>y)
    {
        n=x;
        d=y;
        m=x-y;
        p=0;
    }



    if(a>0)
    {
        for(int i=0;i<x;i++)
        {
            ans[i][0]='R';
        }
    }
    if(a<0)
    {
        for(int i=0;i<x;i++)
        {
            ans[i][0]='L';
        }
    }


    if(b>0)
    {
        for(int i=0;i<y;i++)
        {
            ans[i][1]='U';
        }
    }
    if(b<0)
    {
        for(int i=0;i<y;i++)
        {
            ans[i][1]='D';
        }
    }

    cout<<n<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<ans[i][0]<<ans[i][1];
        if(i<n-1)
        {
            cout<<endl;
        }
    }
    return 0;
}
