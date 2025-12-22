//Function Pointer - Stores the address of functions.
#include<iostream>
using namespace std;

int add(int a,int b)
{
    return a+b;
}
int sub(int a,int b)
{
    return a-b;
}
int mul(int a,int b)
{
    return a*b;
}
int divison(int a,int b)
{
    return a/b;
}
int main()
{
    int (*funcPtr)(int ,int) = add;
    int sum = funcPtr(2,3);
    cout<<"sum is."<<sum<<endl;
    
    int (*funcP[])(int,int) = {add,sub,mul,divison};
    int size = sizeof(funcP)/sizeof(funcP[0]);
    cout<<"size :"<<size<<endl;
    int a=20;
    int b =5;
    for(int i=0;i<size;i++)
    {
        cout<<funcP[i](a,b)<<endl;
    }
    return 0;
}
