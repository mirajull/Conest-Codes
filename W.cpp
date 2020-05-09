#include<iostream>
#include<algorithm>
#include<vector>
#include<queue>
using namespace std;
int g=0;
int main()
{
    int m,f,p,k,res;
    while(1)
    {

        g++;
        vector<int>male;
        vector<int>female;

        cin>>m>>f;
        if((m+f)==0) break;
        for(int i=0;i<m;i++)
        {
            cin>>k;
            male.push_back(k);
        }
        for(int i=0;i<f;i++)
        {
            cin>>p;
            female.push_back(p);
        }
        sort(male.begin(),male.end());
        if(m>f)
        {
            res=m-f;
            cout<<"Case "<<g<<": "<<res<<" "<<male[0]<<endl;
        }
        else{
            cout<<"Case "<<g<<": "<<0<<endl;
        }

    }
    return 0;
}
