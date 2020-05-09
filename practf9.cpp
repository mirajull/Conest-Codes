#include <iostream>
using namespace std;

class coord
{

public:
    int x, y;
    coord (int i = 0, int j = 0) { x = i; y = j; }
    //friend ostream &operator << ( ostream &stream, coord ob);
};

ostream &operator<<( ostream &stream,coord ob)
{
    stream<<ob.x<<" , "<<ob.y<<endl;
    return stream;
}

int main()
{
    coord a(1, 1), b(10, 23);
    cout << a << b;
    return 0;
}
