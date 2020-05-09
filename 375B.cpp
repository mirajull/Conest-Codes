#include<bits/stdc++.h>
using namespace std;

int boro;

void boroke(int a)
{
    boro=max(a,boro);
}

int main()
{
    int len;
    int cnt=0;
    int bal=0;
    string str;
    cin>>len;
    char ara[len];

    //taking input:

    for(int i=0;i<len;i++)
    {
        cin>>ara[i];
    }
    ara[len]='_';

    // iteration:

    for(int i=0;i<=len;i++)
    {
        if(ara[i]=='_' && bal==0 )
        {
            boroke(str.length());
            str.clear();
        }
        if(ara[i]=='_' && bal==1 )
        {
            if(!str.empty())
            {
                cnt++ ;
            }
            str.clear();

        }

        if(ara[i]=='(')
        {
            bal=bal+1;
            boroke(str.length());
            str.clear();

        }
        if(ara[i]==')')
        {
            bal=bal-1;
            if(!str.empty())
            {
                cnt++ ;
            }
            str.clear();
        }
        else if(ara[i]!='_' && (ara[i]!='('&& ara[i]!=')')){
            str.push_back(ara[i]);
        }

    }

    cout<<boro<<" "<<cnt;
    return 0;
}

