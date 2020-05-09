#include<iostream>
#include<cstdlib>
#include<cstring>
using namespace std;

class strtype
{
    char*p;
    int len;
public:
    strtype(char*ptr);
    ~strtype();
    void show();
};
strtype::strtype(char*ptr)
{
    len=strlen(ptr);
    p=(char*)malloc(len+1);
    if(!p)
    {
        cout<<"Allocation error"<<endl;
    }
    strcpy(p,ptr);
}
strtype::~strtype()
{
    cout<<"freeing ..."<<endl;
    free(p);
}
void strtype::show()
{
    cout<<p<<" length - "<< len<<endl;
}
int main()
{
    strtype s1("mirajul"),s2("rony");
    s1.show();
    s2.show();
    s2=s1;
    s1.show();
    s2.show();

    return 0;
}
