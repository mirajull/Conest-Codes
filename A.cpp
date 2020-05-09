#include<iostream>
#include<cstring>
#include<vector>
#include<cstdio>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t>0)
    {
        string s;
        cin>>s;
        int n;
        char a,b;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>a>>b;
            for(int j=0;j<s.length();j++)
            {
                if(s[j]==b)
                {
                    s[j]=a;
                }
            }
        }

        cout<<s<<endl;
        t--;
    }
    return 0;
}
