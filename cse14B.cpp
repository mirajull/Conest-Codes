#include<iostream>
using namespace std;


int main()

{
    int t;
    cin>>t;
    long long a,b;
    for(int i=0;i<t;i++)
    {
        cin>>a>>b;
        if(a>b)
        {
            cout<<">"<<endl;
        }
        if(a<b)
        {
            cout<<"<"<<endl;
        }
        if(a==b)
        {
            cout<<"="<<endl;
        }
    }
    return 0;
}
