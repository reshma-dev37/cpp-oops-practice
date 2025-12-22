//Functor - work as  a function , and achieved by overloading operator() in some class.
#include<iostream>
using namespace std;

class MyClass
{
    int value;
    public:
    MyClass(){}
    MyClass(int val)
    {
        value = val;
    }
    int operator()(int data)
    {
        return data*value;
    }
};

int main()
{
    MyClass myclass(20);
    cout<<myclass(2)<<endl;
    cout<<myclass(5)<<endl;
    return 0;
}
