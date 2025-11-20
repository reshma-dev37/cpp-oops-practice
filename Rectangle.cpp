#include<iostream>
using namespace std;

class Rectangle
{
    private:
    int length;
    int breadth;
    
    public:
    Rectangle():length(0),breadth(0){};
    
    Rectangle(int l,int b)
    {
        length =l;
        breadth =b;
    }
    
    void input()
    {
        cout<<"Enter Length:"<<endl;
        cin>>length;
        cout<<"Enter breadth:"<<endl;
        cin>>breadth;
    }
    
    int perimeter()
    {
        return 2*(length+breadth);
    }
    int area()
    {
        return length *breadth;
    }
};
int main()
{
    Rectangle R;
    R.input();
    cout<<"Perimeter of rectangle is :"<<R.perimeter()<<endl;
    cout<<"Area of rectangle is:"<<R.area()<<endl;
}
