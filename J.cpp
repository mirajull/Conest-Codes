#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;

int f=0;


int main()
{
    int t;
    cin>>t;
    int n,k,cnt=0;
    char s[500+1];
    while(t>0)
    {
        f++;
        cin>>n>>k;
        scanf("%s",s);
        for(int j=0;j<strlen(s);j++)
        {
            for(int i=1;i<=k;i++)
            {
                if(s[j+i]==s[j])
                {
                    cnt++;
                    break;
                }
            }
        }
        cout<<"Case "<<f<<": "<<cnt<<endl;
        t--;
    }
    return 0;
}
