//Diamond Problem:Occurs when two parent classes inherited by the same parent class , due to this derived class copies the same resources due to which ambiguity occurs.
//To avoid this issue , we can use virtual keyword or scope resolution operator.
#include<iostream>
using namespace std;

class A
{
    public:
    void display()
    {
        cout<<"This is display method of class A"<<endl;
    }
};

class B : public virtual  A
{
    public:
};

class C: public virtual  A 
{
    public:
};

class D : public  B, public  C
{
    public :
    void show()
    {
        cout<<"show method of class D:"<<endl;
    }
};

int main()
{
    D d;
    //d.B::display();
    d.display();
    d.show();
    return 0;
}
