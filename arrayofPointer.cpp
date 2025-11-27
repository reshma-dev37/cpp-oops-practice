#include<iostream>
using namespace std;

int add(int a,int b){return a+b;}
int division(int a,int b){return a/b;}
int substraction(int a,int b){ return a-b;}

int main()
{
    int(*funcPtr[])(int,int) = {add,division,substraction};
    int size = sizeof(funcPtr)/sizeof(funcPtr[0]);
    cout<<"Size is:"<<size<<endl;
    int a =20,b=10;
    for(int i=0;i<size;i++)
    {
        cout<<funcPtr[i](a,b)<<endl;
    }
    return 0;
}
