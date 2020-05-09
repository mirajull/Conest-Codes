#include<iostream>
using namespace std;

void decToBinary(int num1 )
{
   if( num1 == 0 )
   {
      return;
   }

   decToBinary( num1/2 );
   cout << num1 % 2;
}

int main()
{
    int n;
    cin>>n;
    decToBinary(n);

    return 0;
}
