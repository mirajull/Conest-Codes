#include<iostream>
using namespace std;

void insertion_sort (long long int a[],long long int n){

    int max=a[0];
    for (int i=1;i<n;i++) {
        if (a[i]>max) {
            max=a[i];
        }
    }

    int *output=new int[n];
    for (int i=0;i<n;i++) {
        output[i]=0;
    }
    int *temp=new int[max+1];
    for (int i=0;i<max+1;i++) {
        temp[i]=0;
    }
    for (int i=0;i<n;i++){
        temp[a[i]]=temp[a[i]]+1;
    }
    for (int i=1;i<max+1;i++) {
        temp[i]=temp[i]+temp[i-1];
    }
    for (int  i=n-1;i>=0;i--) {
        output[temp[a[i]]-1]=a[i];
        temp[a[i]]=temp[a[i]]-1;
    }
}
int main()
{
    long long int i,n,cur=1;
    cin>>n;

    long long int m[n];
    for(i=0;i<n;i++)
    {
        cin>>m[i];
    }

    insertion_sort(m,n);
    for(i=0;i<n;i++)
    {
        if(cur<=m[i])
        {
            cur++;
        }
    }
    cout<<cur;
    return 0;
}
