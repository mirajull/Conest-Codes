#include<bits/stdc++.h>
using namespace std;

vector<float>a;
int main()
{
    int n, n1 , n2, k;
    float sum1=0.0,sum2=0.0;
    cin>>n>>n1>>n2;


    for(int i=0;i<n;i++)
    {
        cin>>k;
        a.push_back(k);
    }
    sort(a.begin(),a.end());
    int mi=min(n1,n2);
    int ma=max(n1,n2);

    for(int i=n-1;i>n-mi-1;i--)
    {
        sum2=sum2+a[i];

    }
    sum2=sum2/mi;

    for(int i=n-1-mi,k=0;k<ma;i--,k++)
    {
        sum1=sum1+a[i];

    }
    sum1=sum1/ma;

   // cout<<sum1<<" "<<sum2<<endl;
   // cout<<sum1+sum2<<endl;
    printf("%0.8f\n",sum1+sum2);

    return 0;
}
