//Method Overloading
#include<iostream>
using namespace std;
void overload()
{
    cout<<"Default method"<<endl;
}
void overload(int a,int b)
{
    int c=a+b;
    cout<<c<<endl;
}
void overload(float a,float b,float d)
{
    float c=a+b+d;
    cout<<c<<endl;
}
int main()
{
   overload();
   overload(5,5);
   overload(12.2,22.3,33.6);
}
