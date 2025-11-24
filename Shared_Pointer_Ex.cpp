//shared_ptr allows multiple pointers to share ownership of a single object.
  
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
        length = l;
        breadth = b;
        height =h;
        cout<<"Parameterized constrctor call"<<endl;
    }
    void display()
    {
        cout<<"Length :"<<length<<" "<<"Breadth is:"<<breadth<<" "<<"Height :"<<height<<endl;
    }
};

int main()
{
    shared_ptr<Rectangle> sptr = make_shared<Rectangle>(10,20,30);
    sptr->display();
    cout<<"Address of sptr is:"<<sptr<<endl;
    cout<<"Use count for sptr is:"<<sptr.use_count()<<endl;
    shared_ptr<Rectangle> sptr1 = sptr;
    cout<<"Use count for sptr is:"<<sptr1.use_count()<<endl;

    sptr1->display();
    cout<<"Address of sptr1:"<<sptr1<<endl;
    cout<<"Use count for sptr is:"<<sptr.use_count()<<endl;

}
