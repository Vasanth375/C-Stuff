//Constructor and destructor
#include<iostream>
using namespace std;
class DERIVED;
class BASE
{
private:
    int p;
public:
    int a;

    BASE(int d,int p)  ///parameter constructor
    {
        a=d;

        this->p=p;
    }
    friend void function(BASE,DERIVED);
};

class DERIVED
{
private:
    int n;
public:
    DERIVED(int num)
    {
        this->n=num;

    }
    friend void function(BASE,DERIVED);
};

///single friend function to all classes
void function(BASE q,DERIVED w)
{
    cout<<w.n<<endl;
    cout<<q.p<<endl;
    cout<<w.n+q.p;
}
int main()
{
    BASE c(2,3);
    DERIVED d(10);
    function(c,d);//one function is used in two classes
}
