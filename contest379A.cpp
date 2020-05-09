#include<iostream>
#include<string>
using namespace std;

int main()
{
    int n;
    cin>>n;
    string s;
    int cntA=0,cntD=0;
    cin>>s;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='A')
        {
            cntA++;
        }
        if(s[i]=='D')
        {
            cntD++;
        }
    }
    if(cntA>cntD)
    {
        cout<<"Anton"<<endl;
    }
    if(cntA<cntD)
    {
        cout<<"Danik"<<endl;
    }
    if(cntA==cntD)
    {
        cout<<"Friendship"<<endl;
    }
    //cout<<cntA<<cntD<<endl;
    return 0;
}
