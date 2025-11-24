//MultiLevelInheritance : A class derived from another derived class .
#include<iostream>
using namespace std;

class A
{
    public:
    void walk()
    {
        cout<<"A is walking"<<endl;
    }
};

class B : public A
{
    public:
    void run()
    {
        cout<<"B is running"<<endl;
    }
};

class C : public B
{
    public:
    void fly()
    {
        cout<<"C is flying "<<endl;
    }
};

int main()
{
    C c;
    c.fly();
    c.run();

    B b;
    b.walk();
    b.run();

    A a;
    a.walk();
    return 0;
}
