#include <iostream>
#include<cmath>
#include <iomanip>
using namespace std;
int main(){
cout<< hex << 100 << endl;
cout << oct << 10 << endl;
cout << setfill('X') << setw(10);
cout << 100 << "hi" << endl;
cout<<endl<<endl;

double x;
cout << setprecision(4);
cout << setfill(' ');
cout << "x       sqrt(x)    x^2\n\n";
for( x = 2.0; x <= 5.0; x++ ){
cout << setw(7) << x <<" ";
cout<<setw(7)<<sqrt(x) << " ";
cout << setw(7) << x*x << endl;
}
return 0;
}
