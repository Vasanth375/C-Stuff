//Runtime/Dynamic memory array creation 
#include<iostream>
using namespace std;
int main()
{
    int *arr;//p
    arr= new int[2];;
    //array creation using new operator
    arr[0]=1;
    arr[1]=4;
    cout<<arr[1];
    //finally Array deallocation 
    delete[] arr;
}
