#include<iostream>
using namespace std;

int sum(long long int x)
{
    long long int m=x;
    int res=0;
    for(; m != 0; m /= 10)
    {
        res=res+(m%10);
    }
    return res;

}

int main()
{
    long long int n;

    while(1)
    {
        cin>>n;
        if(n==0)
        {
            break;
        }
        while(n>=10)
        {
            n=sum(n);
        }
        cout<<n<<endl;

    }
    return 0;
}
