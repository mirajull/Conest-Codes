#include <iostream>
#include<cmath>
using namespace std;


int main(){
cout.width(10);
cout << "hello" <<endl;
cout.fill('%');
cout.width(10);
cout <<"hello"<<endl;
cout.setf(ios::left);
cout.width(10);
cout << "hello"<<endl;
cout.width(10);
cout.precision(10);
cout << 123.234567 <<endl;
cout.width(10);
cout.precision(6);
cout << 123.234567 <<endl;
cout<<endl;
cout<<endl;


double x;
cout.fill(' ');
cout.precision(4);
cout <<"x       sqrt(x) x^2"<<endl;
for( x =2.0; x<=5; x++){
cout.width(7);
cout << x <<" ";
cout.width(7);
cout << sqrt(x) <<" ";
cout.width(7);
cout << x*x <<endl;
}
return 0;
}
