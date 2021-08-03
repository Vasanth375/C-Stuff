//Constructor and destructor
//types of consyricto
#include<iostream>
using namespace std;
class BASE
{
private:
    /* data */
public:
    int a;
    int b;
    BASE(/* args */) ///default constructor
    {
        a=0;b=0;
    }
    BASE(int d,int c)  ///parameter constructor
    {
        a=d;
        b=c;
    }
    BASE(BASE &e)////copy constructor
    {
        cout<<e.a<<e.b;
    }
    ~BASE(){}
};

int main()
{
    BASE b;
    BASE c(2,3);
    BASE d(c);
}
