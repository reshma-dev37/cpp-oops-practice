#include<iostream>
using namespace std;

class Calculator
{
    public:
    int add(int a,int b)
    {
        return a+b;
    }
    double add(float a,float b)
    {
        return a+b;
    }
    int add(int a,int b ,int c)
    {
        return a+b+c;
    }
    double add(double a,double d)
    {
        return a+d;
    }
};
int main()
{
    Calculator c;
    cout<<c.add(10,20,30)<<endl;
    cout<<c.add(500,500)<<endl;
    cout<<c.add(12.5f,3.1f)<<endl;
    cout<<c.add(12.78,25.3);
    return 0;
}
