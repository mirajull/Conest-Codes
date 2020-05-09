#include<bits/stdc++.h>
using namespace std;

class hierarchy
{
public:
    int employee,supervisor,colleague,conviv_if_not,conviv_if_taken;
    hierarchy()
    {
        employee=supervisor=colleague=conviv_if_not=0;
    }
};

hierarchy tree[6005];

void visit(int root)
{
    int child = tree[root].employee;
    while(child)
    {
        visit(child);
        tree[root].conviv_if_taken=tree[root].conviv_if_taken+tree[child].conviv_if_not;
        tree[root].conviv_if_not=tree[root].conviv_if_not+max(tree[child].conviv_if_taken,tree[child].conviv_if_not);
        child=tree[child].colleague;
    }
}

int main()
{
    int n,i,j,k,l;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>tree[i].conviv_if_taken;
    }
    cin>>l>>k;
    while(l!=0 && k!=0)
    {
        tree[l].supervisor=k;
        tree[l].colleague=tree[k].employee;
        tree[k].employee=l;
        cin>>l>>k;
    }
    for(i=1;i<=n;i++)
    {
        if(tree[i].supervisor==0)
        {
            visit(i);
            cout<<max(tree[i].conviv_if_taken,tree[i].conviv_if_not)<<endl;
            break;
        }
    }
    return 0;
}
