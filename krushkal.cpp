#include<bits/stdc++.h>
using namespace std;


class edge
{
public:
    int x,y,wt;
    bool operator<(const edge&p)const
    {
        return wt<p.wt;
    }
};

int ara[100];

int Find(int n)
{
    if(ara[n]==n)
    {
        return n;
    }
    else
    {
        return Find(ara[n]);
    }
}

vector<edge>ev;

int main()
{
    int v,e,x,y,wt;
    cin>>v>>e;
    edge ob;
    for(int i=0;i<e;i++)
    {
        cin>>x>>y>>wt;
        ob.x=x;
        ob.y=y;
        ob.wt=wt;
        ev.push_back(ob);
    }
    sort(ev.begin(),ev.end());
    for(int i=1;i<=v;i++)
    {
        ara[i]=i;
    }
    int f=0;
    int cost=0;
    for(int i=0;i<(int)ev.size();i++)
    {
        int u = Find(ev[i].x );
        int v = Find(ev[i].y );
        if(u!=v)
        {
            ara[u]=v;
            f++;
            cost=cost+ev[i].wt;
            if(f==v-1)
            {
                break;
            }
        }
    }
    cout<<cost<<endl;
    return 0;
}
