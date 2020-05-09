#include<iostream>
using namespace std;


void sorting (long long int arr[], long int length)
{
    long int j;
    long long int temp;
    for(long int i=0;i<length;i++)
    {
    j = i;
    while (j>0 && arr[j]<arr[j-1])
    {
            temp = arr[j];
            arr[j] = arr[j-1];
            arr[j-1] = temp;
            j--;
            }
    }
}


int main()
{
    long long int ara[1000],diff[1000];
    long int n;
    int f=0,z=0;
    cin>>n;
    for(long int i=0;i<n;i++)
    {
        cin>>ara[i];
    }
    sorting(ara,n);

    for(long int i=0;i<n;i++)
    {
        if(ara[i+1]!=ara[i])
        {
            diff[f]=ara[i+1]-ara[i];
            f++;
        }
    }


    if(f>3)
    {
        cout<<"NO";
    }
    else if(f==3)
    {
        for(int j=0;j<2;j++)
        {
            if(diff[j]!=diff[j+1])
            {
                cout<<"NO";
                z++;
            }
        }
        if(z==0){
            cout<<"YES";
        }

    }
    else{
        cout<<"YES";
    }
    return 0;


}
