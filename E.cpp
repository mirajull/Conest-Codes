#include<iostream>
using namespace std;

int main()

{
    int n;
    while(1)
    {
        cin>>n;
        int a,b,c,max=0,res=0;
        if(n==0) break;
        for(int i=0;i<n;i++)
        {
            cin>>a>>b>>c;
            if(c>max)
            {
                res=a*b*c;
                max=c;
            }
            if(c==max && a*b*c>res)
            {
                res=a*b*c;
            }
        }
        cout<<res<<endl;

    }


    return 0;
}
