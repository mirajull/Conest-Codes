#include<iostream>
#include<cstdio>
using namespace std;

class date
{
    int day,month,year;
public:
    date(char*str)
    {
        sscanf(str,"%d%*c%d%*c%d",&day,&month,&year);
    }
    void show()
    {
        cout<<day<<"/"<<month<<"/"<<year<<endl;
    }
};
int main()
{
    date a("19/08/1995");
    a.show();
    return 0;
}
