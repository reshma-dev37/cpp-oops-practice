#include<iostream>
using namespace std;

class Rectangle
{
    public:
    int length;
    int *breadth;
    int height;
    
    Rectangle():length(0),breadth(0),height(0){cout<<"Default constructor:"<<endl;}
    Rectangle(int l,int b,int h)
    {
        cout<<"Parameterized constructor is called"<<endl;
        length = l;
        breadth = new int;
        *breadth =b;
        height =h;
    }
    
    Rectangle(const Rectangle &obj){
        cout<<"Copy constructor is called:"<<endl;
        length = obj.length;
        breadth = new int;//deep copy constructor
        *breadth = *(obj.breadth); 
        height = obj.height;
    }
    void displayAddress()
    {
        cout<<"Address of breadth is:"<<&breadth<<endl;
    }
};

int main()
{
    Rectangle R;
    Rectangle R1(10,20,30);
    Rectangle R3= R1;
    R3.displayAddress();
    R1.displayAddress();
    return 0;
}
