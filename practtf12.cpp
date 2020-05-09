#include <iostream>
using namespace std;

class myclass {

public:
    static int i;
    void seti( int n) { i = n;}
    int geti() { return i; }
};

int myclass::i;

int main(){
    myclass o1, o2;
    myclass::i=989;
    //o2.seti(345);
    cout << o1.geti() <<" "<< o2.geti() << endl;
    return 0;
}
