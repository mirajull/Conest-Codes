#include <iostream>
using namespace std;


class Demo
{
    mutable int i;
    int j;
public:
    int geti() const {return i;} // ok
    int getj() const {return j;} // ok
    void seti(int x) const
    {
    i = x; //ok
    }
    void setj(int x) const
    {
        j = x; //wrong
    }
};

int main(){
    Demo ob;
    ob.seti(100);
    ob.setj(200);
    cout << ob.geti() <<" " << ob.getj() << endl;
    return 0;
}
