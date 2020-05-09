#include<iostream>
using namespace std;


int main()
{
    int t,k=0;
    cin>>t;
    while(t!=0)
    {
        t--;
        k++;
        int c;
        cin>>c;
        int n;
        cin>>n;
        int x[n];
        for(int i=0;i<n;i++)
        {
            cin>>x[i];
        }
        for(int j=0;j<n;j++)
        {
            for(int i=j+1;i<n;i++)
            {
                if(x[i]+x[j]==c)
                {
                    cout<<"Case #"<<k<<": "<<j+1<<" "<<i+1<<endl;
                    break;
                }
            }
        }
    }

    return 0;
}
