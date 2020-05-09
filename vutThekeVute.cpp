#include<iostream>
#include<map>
using namespace std;

int main()
{

    int t;
    cin>>t;
    while(t>0)
    {
        int line,n,dist;
        map<string,int> mp;
        string s1,s2;
        string first;
        cin>>line;
        for(int i=0;i<line;i++)
        {
            cin>>s1>>n;
            if(i==0)
            {
                mp[s1]=0;
                first=s1;
            }
            if(mp[s1]==0)
            {
                mp[s1]=0;
            }

            for(int i=0,j=0;i<n;i++)
            {
                cin>>s2>>dist;
                j=j+dist;
                if(mp[s2]==0 || mp[s2]>=mp[s1]+j)
                {
                    mp[s2]=mp[s1]+j;
                }
            }
        }

        cout<<endl;


        int Max=-1;
        int f=0;
        map<string,int>::iterator it;
        for(it=mp.begin();it!=mp.end();it++)
        {
            if( (it->second)==0 && (it->first)!= first)
            {
                cout<<"News not shared over the whole group";
                f++;
                break;
            }
            if(Max< (it->second))
            {
                Max= it->second;
            }
        }
        if(f==0)
        {
            cout<<Max<<endl;
        }

        t--;
        mp.clear();
    }
    return 0;
}
