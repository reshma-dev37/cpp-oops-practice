#include<iostream>
using namespace std;
#define PI 3.14
class Shape
{
    public:
    virtual void area() 
    {
        cout<<"This is area method"<<endl;
    }
};
class Circle : public Shape
{
    public:
    int radius;
    void  area()  override 
    {
        cout<<"Enter radius:"<<endl;
        cin>>radius;
        float area = PI*radius*radius;
        cout<<"Area of circle is :"<<area<<endl;
    }
};

class Square : public Shape
{
    public:
    int side;
    
    void area() 
    {
         cout<<"Enter side:"<<endl;
         cin>>side;
         int area = side * side;
         cout<<"Area of square is:"<<area<<endl;
    }
};

int main()
{
    Shape s;
    s.area();
    
    Circle c;
    c.area();
    
    Square sq;
    sq.area();
    return 0;
}
