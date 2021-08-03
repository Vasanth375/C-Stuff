//Object passing and Returning Object
#include<iostream>
using namespace std;
class BASE
{
public:
    int a,b;
    BASE(int a,int b) 
    {
        this->a=a;
        this->b=b;
    }

    BASE(){}

    void display()
    {
        cout<<a<<b<<endl;
    }
};

BASE fun1(BASE &b)//Object Reference 
{
    b.a+=1;
    b.b+=1;
    return b;
}

BASE by_value(BASE b)//object by value
{
    b.a*=2;
    b.b*=2;
    return b;
}

int main()
{
    BASE s(5,5),result;
    s.display();

    result=fun1(s);//passing object as argument and returning object

    result.display();

    result=by_value(s);//passing object as reference argument and returning the object
    result.display();
}
