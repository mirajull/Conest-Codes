#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int ara[11];
    fill_n(ara,11,0);

    int j=10;
    int m=n;
    for(int i=0;n!=0;n=n/10)
    {
        if(n==m)
        {
            ara[i]=ara[i]+(n/10);
        }
        else{

        }

    }

    ara[0]--;

    for(int i=0;i<10;i++)
    {
        cout<<ara[i];
        if(i!=9)cout<<" ";
    }




    return 0;
}
