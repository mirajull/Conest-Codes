#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int m,n;
    for(int i=0;;i++)
    {
        cin>>m>>n;
        if(m==0||n==0)
        {
            break;
        }
        else{
            double a1=sqrt(n);
            int a2=a1;
            double b1=sqrt(m);
            int b2=b1;
            if(a1-a2==0 && b1-b2==0)
            {
                cout<<a2-b2+1 <<endl;
            }
            else if(a1-a2==0 && b1-b2!=0)
            {
                cout<<a2-b2<<endl;
            }
            else if(b1-b2==0 && a1-a2!=0  ){
                cout<<a2-b2+1<<endl;
            }
            else{
                cout<<a2-b2<<endl;
            }

        }

    }

    return 0;
}
