//Function Pointer:: Holds the address of function.
#include<iostream>
using namespace std;

int multiply(int a, int b)
{
    return a*b;
}
float add(float a,float b)
{
    return a+b;
}

int main()
{
    int(*funcPtr)(int ,int);
    funcPtr = multiply;
    int  y = funcPtr(10,20);
    cout<<"Y is:"<<y<<endl;
    cout<<"----------------"<<endl;
    float(*funcFPtr)(float ,float);
    funcFPtr = add;
    float z = funcFPtr(3.4,2.1);
    cout<<"Z is :"<<z<<endl;
    cout<<"----------------"<<endl;
    return 0;

}
