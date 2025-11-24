//weak_ptr does NOT own the object
// It cannot directly access the object and It does NOT overload operator->
#include<iostream>
#include<memory>
using namespace std;

class Rectangle
{
    public:
    int length;
    int breadth;
    int height;

    Rectangle(int l,int b, int h)
    {
        length =l;
        breadth = b;
        height = h;
        cout<<"Parameterized constructor call:"<<endl;
    }
    void display()
    {
        cout<<"Length is:"<<length<<" "<<"Breadth :"<<breadth<<" "<<"Height is:"<<height<<endl;
    }
};

int main()
{
    shared_ptr<Rectangle> sptr = make_shared<Rectangle>(10,20,60);
    sptr->display();
    cout<<"Usecount:"<<sptr.use_count()<<endl;

    weak_ptr<Rectangle> wptr = sptr;
    if(auto temp = wptr.lock())
    {
        cout<<"Weak ptr successfully locked"<<endl;
        temp->display();
        cout<<"Use count is :"<<wptr.use_count()<<endl;
    }  
    else{
        cout<<"Weak ptr is failed"<<endl;
    }  
}
