//inline function
//inline function replace the calling method in main method
#include<iostream>
using namespace std;
inline int add(int a,int b)
{
    return(a+b);
}
int main()
{
cout<<add(1,2);
}
