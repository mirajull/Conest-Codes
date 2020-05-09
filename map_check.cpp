#include<iostream>
#include<map>
using namespace std;

int main()
{
    string s;
    map<string,int> mp;
    /*for(int i=0;i<5;i++)
    {
        mp[s]=0;
    }
    */
    cin>>s;
    cout<<mp[s]<<endl;
   /* map<string,int>::iterator it;
    for(it=mp.begin();it!=mp.end();it++)
    {
        cout<<it->first<<" "<<it->second<<endl;
    }
*/

    return 0;
}
