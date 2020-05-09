#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,s;
    vector<pair<long long int,long long int>>ami;
    long long int q,pid,rid;
    cin>>t;
    while(t>0)
    {
        cin>>q;
        for(int i=0;i<q;i++)
        {
            cin>>s>>pid>>rid;
            ami.push_back(make_pair(pid,rid));
            if(s==1)
            {
                cout<<'Y'<<endl;
                cout<<'N'<<endl;
            }
            else if (s==2)
            {

            }
        }




        t--;
    }




    return 0;
}
