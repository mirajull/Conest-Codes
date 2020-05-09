#include<iostream>
using namespace std;
int f=0;
int main()
{

    int t;
    cin>>t;
    while(t>0)
    {
        f++;
        int a,b,c;
        cin>>a>>b>>c;
        if((a<=20&&b<=20)&&c<=20)
        {
            cout<<"Case "<<f<<": "<<"good"<<endl;
        }
        else{
            cout<<"Case "<<f<<": "<<"bad"<<endl;
        }


        t--;
    }

    return 0;
}
