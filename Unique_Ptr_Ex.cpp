//A smart pointer is a wrapper over a raw pointer that automatically manages dynamically allocated memory.
//unique_ptr can point to only one object at a time.Ownership transfer is done using std::move().

#include<iostream>
#include<memory>
using namespace std;

class Rectangle
{
    public:
    int length;
    int breadth;
    int height;

    Rectangle(int l,int b,int h)
    {
        length =l;
        breadth =b;
        height =h;
        cout<<"Parameterized constructor call"<<endl;
    }

    void display()
    {
        cout<<"Length:"<<length<<" "<<"Breadth:"<<breadth<<" "<<"Height:"<<height<<endl;
    }
};

int main()
{
    unique_ptr<Rectangle> uptr = make_unique<Rectangle>(10,20,30);
    uptr->display();
    cout<<uptr<<endl;

    unique_ptr<Rectangle> uptr2 = make_unique<Rectangle>(10,20,30);
    uptr2->display();
    cout<<uptr2<<endl;


    unique_ptr<Rectangle> uptr1 = std::move(uptr);//transfer the ownership
    uptr1->display();
    cout<<uptr1<<endl;

    cout<<"----------------------"<<endl;
    cout<<uptr<<endl; //null pointer 

}
