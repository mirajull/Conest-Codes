#include<iostream>
using namespace std;

class A
{
public:
    long long int a;
    long long int b;
};

void sorting (A arr[], int length)
{
    int j;
    A temp;
    for(int i=0;i<length;i++)
    {
    j = i;
    while (j > 0 && arr[j].b > arr[j-1].b){
			  temp = arr[j];
			  arr[j] = arr[j-1];
			  arr[j-1] = temp;
			  j--;
			  }
		}
}


int main()
{
    long long int n,a,b,k,ans;
    int m;
    A ob[21];
    ans=0;
    k=0;
    cin>>n;
    cin>>m;
    for(int i=0;i<m;i++)
    {
        cin>>ob[i].a>>ob[i].b;
    }
    sorting(ob,m);
    long long int i=0;
    while(k<n)
    {
        if(ob[i].a<=(n-k))
        {
            k=k+ob[i].a;
            ans=ans+(ob[i].a)*(ob[i].b);
        }
        else
        {
            ans=ans+(n-k)*(ob[i].b);
            break;
        }
        i++;
    }
    if(m==1)
    {
        if(ob[0].a<=n)
        {
            ans= ob[0].a * ob[0].b  ;
        }
        else{
            ans= n * ob[0].b  ;
        }
    }

    for(int i=0;i<m;)

    cout<<ans;



    return 0;
}
