#include<iostream>
using namespace std;


int f=0;
int main()
{
    while(1)
    {
        f++;
        int n;
        cin>>n;
        if(n==0) break;
        int x,cnt=0;
        for(int i=0;i<n;i++)
        {
            cin>>x;
            if(x>=1&&x<=99)
            {
                cnt++;
            }
            if(x==0)
            {
                cnt--;
            }
        }
        cout<<"Case "<<f<<": "<<cnt<<endl;
    }
    return 0;
}
