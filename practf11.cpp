#include <iostream>
#include <typeinfo>
using namespace std;

class base
{
       virtual void f();
};
class derived1:public base
{

};
class derived2:public base
{

};

int main(){
       int i;
       base *p, b_ob;
       derived1 ob1;
       derived2 ob2; 
       cout << typeid(i).name() <<endl;
       p = &b_ob;
       cout << typeid(*p).name() <<endl;
       p = &ob1;
       cout << typeid(*p).name() <<endl;
       p = &ob2;
       cout << typeid(*p).name() <<endl;
       return 0;
}

