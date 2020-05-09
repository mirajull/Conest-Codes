#include<bits/stdc++.h>
#include <algorithm> // for std::find
#include <iterator> // for std::begin, std::end
using namespace std;

int ara1[1000000],ara2[1000000];
int f=0;

int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>ara1[i];
    }
    for(int i=0;i<n;i++)
    {
        cin>>ara2[i];
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            int x=ara1[i]^ara2[j];
            if(find(std::begin(ara1), std::end(ara1), x) !=std::end(ara1))
            {
                f++;

            }
            else if(find(begin(ara2), end(ara2), x) !=end(ara2))
            {
                f++;
            }
            //cout<<ara1[i]<<"xor"<<ara2[j]<<" : "<<(ara1[i]^ara2[j])<<endl;
        }
    }
    //cout<<f<<endl;
    if(f%2==0)
    {
        cout<<"Karen";
    }
    else
    {
        cout<<"Koyomi";
    }
    return 0;
}
